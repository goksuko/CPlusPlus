#include <iostream>
using namespace std;

enum EyeColor {Brown, Blue, Green, Gray, Other};

int main()
{

	EyeColor eyeColor = Brown;

	switch(eyeColor){
		case Brown: cout << "Brown" << endl; break;
		case Blue: cout << "Blue" << endl; break;
		case Green: cout << "Green" << endl; break;
		case Gray: cout << "Gray" << endl; break;
		case Other:	cout << "Other" << endl; break;	
	}

		switch(99){
		case Brown: cout << "Brown" << endl; break;
		case Blue: cout << "Blue" << endl; break;
		case Green: cout << "Green" << endl; break;
		case Gray: cout << "Gray" << endl; break;
		case Other:	cout << "Other" << endl; break;	
		default: cout << "Not found" << endl; break;
	}
}