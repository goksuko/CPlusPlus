
#include "../includes/Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Please provide a level.\n";
		return -1;
	}
	std::string level_name = argv[1];

    Harl    harl;
    
    harl.complain(level_name);
    return 0;
}