#include <iostream>
using namespace std;

// class is a blueprint
// an object a concrete example of that class
// class is a user defined data type
// define the properties of that class

class Car
{
public:
	string name;
	string color;
	double price;

	// constructor
	Car(string name_, string color_, double price_)
	{
		name = name_;
		color = color_;
		price = price_;
	}

	// method
	void info()
	{
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;
		cout << "Price: " << price << "$" << endl;
	}

};

// to create a varibale, an object having that type
// in order to set value to those properties, they should be accesible (public)

// a constructor is a special method that is called automaticly when an object is created / when you create an instance of a class
// we assigned values to these properties 
// we can assign those values in the construction of the object


int main()
{
	Car myCar("Toyota", "Red", 10000);
	// Car myCar;
	// myCar.name = "Toyota";
	// myCar.color = "Red";
	// myCar.price = 10000;

	cout << "Name: " << myCar.name << endl;
	cout << "Color: " << myCar.color << endl;
	cout << "Price: " << myCar.price << "$" << endl;

	Car myCar2("Fiat", "Blue", 100); // new objects
	// Car myCar2;
	// myCar2.name = "Fiat";
	// myCar2.color = "Blue";
	// myCar2.price = 100;

	myCar2.info();
	// cout << "Name: " << myCar2.name << endl;
	// cout << "Color: " << myCar2.color << endl;
	// cout << "Price: " << myCar2.price << "$" << endl;

}

