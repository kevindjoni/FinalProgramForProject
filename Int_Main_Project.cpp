#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>
#include <string>
#include "Void_Report_Project.cpp"
using namespace std;

int counter = 0;

void menu();
 
int main()
{		
	cout << "Parking Management System" << endl;
	cout << "-------------------------" << endl;
	menu();
	
	return 0;
}

void menu()
{
	int option;
	
	cout << "Enter any of the following option with a number:" << "\n";
	cout << "1. Input" << endl;
	cout << "2. Output" << endl;
	cout << "3. Report" << endl;
	cout << "Your option: ";
	cin >> option;
	
	switch(option)
	{
		case 1 : 
			if(counter == 0)
			{
				in();
				counter++;
			}
			else
			cout<< "Invalid Input" << endl << endl;
			menu();
			break;
			
		case 2 :
			if(counter == 1)
			{
				out();
				counter++;
			}
			else
			cout<< "Invalid Input" << endl << endl;
			menu();
			break;
			
		case 3 :
			if(counter == 2)
			{
				report();
				counter++;
				exit(0);
			}
			else
			cout<< "Invalid Input" << endl << endl;
			menu();
			
		default:
			cout << "Invalid Input" << endl << endl;
			menu();	
	}
}
