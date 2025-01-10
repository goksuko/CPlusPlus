#include <iostream>
using namespace std;

// a variable is a container than can store a value
// a pointer is a container that stores a memory address

void celebrateBirthday(int age);
void celebrateBirthday_pointer(int *age);


int main()
{
	int myAge = 25;
	cout << "Before the function call, I am " << myAge << " years old." << endl;
	celebrateBirthday(myAge);
	cout << "After the function call, I am " << myAge << " years old." << endl;
	celebrateBirthday_pointer(&myAge);
	cout << "After the pointer function call, I am " << myAge << " years old." << endl;


}

// here we are passing the value of myAge to the function = copying
// the function will not change the value of myAge
void celebrateBirthday(int age)
{
	age++;
	cout << "Happy Birthday! You are now " << age << " years old!" << endl;
}

void celebrateBirthday_pointer(int *age)
{
	(*age)++;
	cout << "Happy Birthday! You are now " << *age << " years old!" << endl;
}