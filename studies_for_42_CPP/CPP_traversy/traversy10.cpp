#include <iostream>
using namespace std;

// inheritence
// class has 4 properties(name,...) and 3 methods(info, crash, repair)
// we can create a new class that inherits all the properties and methods of the Car class

class Car
{
private:
	string name;
	string color;
	double price;
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

int main()
{
	Car Toyota("Toyota", "Red", 10000);
	ElectricCar Tesla("Tesla", "Black", 50000);
	Tesla.info();
	Tesla.move();
	Tesla.crash();
	Tesla.move();
	Tesla.repair();
	Tesla.move();
}

