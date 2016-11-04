#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
using namespace std;

string time1;				
clock_t start;

void in()
{
	time_t rawtime; 	
	struct tm *timeinfo;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	cout << endl;
	
	time1 = asctime(timeinfo);
	cout << "In Time and Date: " << "\n" << time1 << endl;
	start = clock();		//Starts stopwatch
}
