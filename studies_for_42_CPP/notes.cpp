#include <iostream>

// create a class for player, name it player
// add 3 member variables to the class: x, y, speed
class Player
{
// to make the variables to be able to be accessed outside of the class
public:
	int x, y;
	int speed;
	void Move_method(int xa, int ya)
	{
		x += xa * speed;
		y -= ya * speed;
	}
};

// functions contain functionalities
// we can move functions inside classes
// functions inside classes are called methods
void Move_function(Player& mario, int xa, int ya)
{
	mario.x += xa * mario.speed;
	mario.y -= ya * mario.speed;
}

// here Player is a type now
// mario is a variable with the type of Player
// variables that are made from class types are called objects
// a new object is an instance of a class

int main ()
{
	// instantiated a Player object 
	// because we created a new instance of that player type
	Player mario;

	// set variables
	mario.x = 5;
	mario.y = 0;
	mario.speed = 2;

	// The line `<< std::endl;` in C++ is typically used to 
	// insert a newline character into the output stream and then flush the stream. 
	std::cout << "x before: " << mario.x << std::endl;
	std::cout << "y before: "  << mario.y << std::endl;
	Move_function(mario, 1, 1);
	std::cout << "x after: " << mario.x << std::endl;
	std::cout << "y after: "<< mario.y << std::endl;
	mario.Move_method(1, 1);
	std::cout << "x last: " << mario.x << std::endl;
	std::cout << "y last: " << mario.y << std::endl;
	return 0;
}