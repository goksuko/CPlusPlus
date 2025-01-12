#include "../includes/file.hpp"

int main(int argc, char **argv)
{
	if (argc != 4) {
		std::cerr << "Please provide a file name, a string to replace, and another sting to be replaced.\n";
		return -1;
	}
	std::string filename = argv[1];
	std::string to_replace = argv[2];
	std::string replaced = argv[3];
	
	File my_file = File(filename, to_replace, replaced);
	my_file.do_replacement();
	return 0;
}