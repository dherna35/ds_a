#include <iostream>
#include "clockType.h"
using namespace std;
int main() {
	int hours,minutes,seconds;
	cout<<"Please Input a time value\n";
	cout<<"Hour: ";
	cin>>hours;
	cout<<"Minutes: ";
	cin>>minutes;
	cout<<"Seconds: ";
	cin>>seconds;
	
	//test default constructor
	clockType test1;
	test1.getTime(hours, minutes, seconds);
	if(hours == 0 && minutes == 0 && seconds == 0){
		cout<< "Test 1 passed";
	}
	return 0;
}