#include <iostream>
#include <ctime>
#include <iomanip>
#include <string>
#include "Void_Out_Project.cpp"
using namespace std;

void report()
{	
	cout << endl << "Report" << endl;
	cout << "------" << endl;
	cout << "In Time & Date " << "\t\t: " << time1;
	cout << "Out Time & Date " << "\t: " << time2;
	cout << "Duration " << "\t\t: " << durationHr << " hour(s) " << durationMin;
	cout << " minute(s) " << durationSec << " second(s)" << endl;
	cout << "Charge " << "\t\t\t: $" << charge;
}
