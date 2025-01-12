#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <sstream>


class File
{
	public:
		File(std::string filename, std::string to_replace, std::string replaced);
		~File();

		void do_replacement();

	private:
		std::string _name;
		std::string _to_replace;
		std::string _replaced;
		std::string _new_file_name;
};

#endif