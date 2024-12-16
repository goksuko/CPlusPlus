#include <iostream>
using namespace std;


int main()
{
	int luckyNumbers[5] = {4, 8, 15, 16, 23};
	cout << luckyNumbers << endl; // memory address of the first element
	cout << &luckyNumbers[0] << endl; // memory address of the first element
	cout << luckyNumbers[0] << endl; // value of the first element
	cout << *luckyNumbers << endl; // value of the first element
	cout << luckyNumbers[1] << endl; // value of the second element
	cout << *(luckyNumbers + 1) << endl; // value of the second element
	cout << &luckyNumbers[1] << endl; // memory address of the third element
	cout << luckyNumbers[2] << endl; // value of the third element

	int *luckyPointer = luckyNumbers;
	cout << luckyPointer << endl; // memory address of the first element
	cout << "pointing to: " << luckyPointer << ", value: " << *luckyPointer << endl; // value of the first element
	luckyPointer++;
	cout << "pointing to: " << luckyPointer << ", value: " << *luckyPointer << endl; // value of the second element
}

