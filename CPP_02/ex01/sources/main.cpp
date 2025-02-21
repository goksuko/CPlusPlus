#include "../includes/Fixed.hpp"

int main( void ) {
	// std::cout << "Fixed a" << std::endl;
	Fixed a;
	// std::cout << "Fixed const b( 10 )" << std::endl;
	Fixed const b( 10 );
	// std::cout << "Fixed const c( 42.42f )" << std::endl;
	Fixed const c( 42.42f );
	// std::cout << "Fixed const d( b )" << std::endl;
	Fixed const d( b );

	std::cout << "a = Fixed( 1234.4321f )" << std::endl;
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// std::cout << "a is " << a.toFloat() << " as float" << std::endl;
	// std::cout << "b is " << b.toFloat() << " as float" << std::endl;
	// std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	// std::cout << "d is " << d.toFloat() << " as float" << std::endl;
	return 0;
}
	