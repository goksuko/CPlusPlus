#include <iostream>
using namespace std;

float sum(float a, float b); // decleration here, definition below
void introduceMe(string name, int age = 0); // default value for age

int main()
{
	cout << sum (2.2, 5) << endl;
	cout << sum (3.2, 5) << endl;
	cout << sum (4.2, 5) << endl;

	introduceMe("John", 30);
	introduceMe("Jane");
}

float sum(float a, float b) // a and b are arguments with type float
{
	return a + b;
}

void introduceMe(string name, int age)
{
	cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
}