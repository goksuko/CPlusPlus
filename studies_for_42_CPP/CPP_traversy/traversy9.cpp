#include <iostream>
using namespace std;

// encapsulation
// these properties of the class should not be public
// methods that can envoke so that user can change data

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

int main()
{
	Car Toyota("Toyota", "Red", 10000);
	// Toyota.info();

	Car Fiat("Fiat", "Blue", 100); // new objects
	// Fiat.info();

	Toyota.move();
	Toyota.crash();
	Toyota.move();
	Toyota.repair();
	Toyota.move();
}

