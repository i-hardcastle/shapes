// Ian Hardcastle
// Date: 9/19/22
// Program Title: shapes
// Program Description: Calculates the area of a rectangle, circle, or triangle by choice.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Named constants
const double PI = 3.14;
int main()
{

	// Variable declaration

	int choice;
	double s1, s2, r , area;

	//Program title and description for the user

	cout << "Program Title: shapes" << endl << "Program Description: Calculates the area of a rectangle, circle, or triangle by choice." << endl << endl;


	// User input

	cout << "Choose the corresponding number for what task you want to complete." << endl;
	cout << "1 - Rectangle" << endl;
	cout << "2 - Circle" << endl;
	cout << "3 - Triangle" << endl;
	cout << "Enter selected number here: ";
	cin >> choice;

	// Output to the screen

	if (choice == 1)
	{
		system("cls");
		cout << "Perform task #1 : Rectangle area" << endl;

		 // User input
		cout << "What is the value of side 1?" << endl;
		cin >> s1;
		cout << "\nWhat is the value of side 2?" << endl;
		cin >> s2;

		// Calculations
		area = s1 * s2;

		cout << "\nThe area of your rectangle is: " << area << endl << endl;;

	}
	else if (choice == 2)
	{
		system("cls");
		cout << "Perform task #2 : Circle area" << endl;
		
		// User input
		cout << "What is the value of your radius?" << endl;
		cin >> r;

		// Calculations
		area = pow(r, 2) * PI;

		cout << "\nThe area of your circle is: " << area << endl << endl;

	}
	else if (choice == 3)
	{
		system("cls");
		cout << "Perform task #3 : Triangle area" << endl;

		// User input
		cout << "What is the value of the base?" << endl;
		cin >> s1;
		cout << "\nWhat is the value of the height?" << endl;
		cin >> s2;

		// Calculations
		area = 0.5 * s1 * s2;

		cout << "\nThe area of your triangle is: " << area << endl << endl;

	}
	else
		cout << "Input error; program terminating" << endl;

	return 0;
}