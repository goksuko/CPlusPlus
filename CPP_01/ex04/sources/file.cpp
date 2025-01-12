#include "../includes/file.hpp"

File::File(std::string filename, std::string to_replace, std::string replaced)
	:	_name(filename),
		_to_replace(to_replace),
		_replaced(replaced),
		_new_file_name(filename + ".replace")
{ }

File::~File()
{ }

void File::do_replacement()
{
	std::ifstream original_file(this->_name);
    if (!original_file.is_open()) {
		std::cerr << "Error opening file: " << this->_name << std::endl;
        return;
    }

    std::ofstream new_file(this->_new_file_name, std::ios::trunc);
    if (!new_file.is_open()) {
        std::cerr << "Error creating file: " << this->_new_file_name << std::endl;
        return;
    }


    std::string line;
    while (std::getline(original_file, line))
    {
        size_t pos = 0;
        while (true)
        {
            size_t found = line.find(this->_to_replace, pos); /* returns position of 1st occurence of "to_replace" in line*/
            if (found == std::string::npos)
            {
                new_file << line.substr(pos) << '\n'; /* no more occurences of "to_replace" in line */
                break;
            }
            new_file << line.substr(pos, found - pos) << this->_replaced; /* another occurence, append until position then adds "replaced"*/
            pos = found + this->_to_replace.length(); /* pos is now after occurence of "to_replace" replaced by "replaced"*/
        }
    }

    original_file.close();
    new_file.close();
    std::cout << "Now you can open the new file!" << std::endl;
}
