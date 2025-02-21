#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int main( void ) 
{
	Point a(0.f, 0.f);
	Point b(10.f, 30.f);
	Point c(20.f, 0.f);
	
	std::string answer1 = bsp(a, b, c, Point( 0.f, 15.f )) ? "\033[32m inside \033[0m" : "\033[31m outside \033[0m";
	std::string answer2 = bsp(a, b, c, Point( 10.f, 15.f )) ? "\033[32m inside \033[0m" : "\033[31m outside \033[0m";

	std::cout << "outside: " << answer1 << std::endl;
	std::cout << "inside : " << answer2 << std::endl;

	return 0;
}
