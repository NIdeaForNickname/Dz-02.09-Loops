// Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>


using namespace std;
int main()
{
	// task.1


	/*int var;
	cout << "Input num: ";
	cin >> var;

	cout << "Multiples of " << var << ": ";
	for (int i = 1; i <= var; i++) {
		if (var % i == 0){
			cout << i << ", ";
		}
	}*/


	// task.2


	/*char cvar;
	int low = 0, high = 1000, guess = 500;
	do {
		cout << "Is " << guess << " your number?(use >, < or =) ";
		cin >> cvar;
		switch (cvar)
		{
		case '<':
			high = guess;
			guess = (low + guess) / 2;
			break;
		case '>':
			low = guess;
			guess = (high + guess) / 2;
			break;
		case '=':
			cout << "Gotcha!" << endl;
			break;
		default:
			break;
		}
	} while (cvar != '=');*/


	// task.3

	
	/*float income, rent, fvar = 0;

	cout << "Income: ";
	cin >> income;
	do {
		cout << "Rent (Rent >= Income): ";
		cin >> rent;
	} while (rent < income);

	for (int i = 0; i < 10; i++) {
		fvar += (rent - income);
		rent *= 1.03;
	}

	cout << "Money required: " << fvar << endl;*/


	// task.4


	 int height, levels, spaces, length;
	 cout << "Input layer height: ";
	 cin >> height;
	 cout << "Input layer amount: ";
	 cin >> levels;


	 int width = levels + height - 1;
	 for (int i = 0; i < levels; i++) {
		 for (int j = 0; j < height; j++) {
			 spaces = width - i - j - 1;
			 for (int k = 0; k < spaces; k++) {
				 cout << " ";
			 }

			 length = (i + j) * 2 + 1;
			 for (int k = 0; k < length; k++) {
				 cout << "\033[32m@";
			 }
			 cout << endl;
		 }
	 }

	 spaces = width - 2;
	 for (int j = 0; j < height; j++) {
		 for (int i = 0; i < spaces; i++)
		 {
			 cout << " ";
		 }

		 for (int i = 0; i < 3; i++)
		 {
			 cout << "\033[38;5;52m\033[48;5;52m@\033[m";
		 }

		 cout << endl;
	 }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
