#include <iostream>
using namespace std;

int main()
{
	cout << "WHILE:\n";	
	// if while loop is not ok, it will not be entered into the loop
	// int i = 0;
	int i = 11;
	while (i <= 10)
	{
		cout << i << endl;
		i++;
	}

	cout << "DO-WHILE:\n";
	// execute always at least once
	// int j = 0;
	int j = 11;
	do
	{
		cout << j << endl;
		j++;
	} while (j <= 10);

	cout << "FOR:\n";
	string animals[5] = {"cat", "dog", "bird", "fish", "elephant"};
	//for (initialize the counter, condition, increment)
	for (int k = 0; k < 5; k++)
	{
		cout << animals[k] << endl;
	}
}
