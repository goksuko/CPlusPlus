#include <iostream>
using namespace std;

// polimorfizm
// ability of an object to have multiple forms

// same method but different implementation

class Car
{
private: // access modifier // accessable only within this class

	string color;
	double price;
	

protected: // accessible from derived classes but not public
	// protected properties can be accessed by the derived classes
	// private properties cannot
	string name;
	bool isBroken;

public:
	Car(string name_, string color_, double price_)
	{
		name = name_;
		color = color_;
		price = price_;
		isBroken = false;
	}

	void info()
	{
		cout << "Name: " << name << endl;
		cout << "Color: " << color << endl;
		cout << "Price: " << price << "$" << endl;
	}

	void crash()
	{
		isBroken = true;
		cout << name << " has crashed!" << endl;
	}

	void repair()
	{
		isBroken = false;
		cout << name << " has been repaired!" << endl;
	}

	void move()
	{
		if (isBroken)
		{
			cout << name << " is broken and cannot move!" << endl;
		}
		else
		{
			cout << name << " is moving!" << endl;
		}
	}


};

// the class that we inherit from is the base class (car)
// the class that inherits is the derived class (electric)

class ElectricCar : public Car
{
public:
	ElectricCar(string name_, string color_, double price_) : Car(name_, color_, price_)
	{
	}
};

class SubmarineCar : public Car
{
public:
	SubmarineCar(string name_, string color_, double price_) : Car(name_, color_, price_)
	{
	}

	void move()
	{
		if (isBroken)
		{
			cout << name << " is broken and cannot move!" << endl;
		}
		else
		{
			cout << name << " is swimming!" << endl;
		}
	}
};

int main()
{
	Car Toyota("Toyota", "Red", 10000);
	ElectricCar Tesla("Tesla", "Black", 50000);
	SubmarineCar Submarine("Submarine", "Blue", 1000000);

	Toyota.move();
	Tesla.move();
	Submarine.move();

	int a = 5;
	// float a = 5;
	int *ptr = &a; // you can have a pointer of a base class to a derived class by polimorfism

	Car *car1 = &Tesla;
	Car *car2 = &Submarine;

	car1->crash();
	car2->crash();

	Tesla.move();
	Submarine.move();

	car1->repair();
	car2->repair();

	Tesla.move();
	Submarine.move();
	
	// invoke different 


}

