#include <iostream>
#include <list>
#include "clockType.h"

using namespace std;
int main() {
	//test default constructor
	clockType test1;
	int test_hr, test_min, test_sec;
	test1.getTime(test_hr, test_min, test_sec);
	if(test_hr == 0 && test_min == 0 && test_sec == 0){
		cout<< "Test 1 passed\n";
	}
	else{
	    cout<< "Test 1 failed\n";
	}

	//test constructor with inputs
    int hours,minutes,seconds;
    cout<<"Please Input a time value\n";
    cout<<"Hour: ";
    cin>>hours;
    cout<<"Minutes: ";
    cin>>minutes;
    cout<<"Seconds: ";
    cin>>seconds;
	clockType test2(hours, minutes, seconds);
	test2.getTime(test_hr, test_min, test_sec);
	if(hours == test_hr && minutes == test_min && test_sec == seconds){
	    cout<<"Test 2 passed\n";
	}
	else{
	    cout<<"Test 2 failed\n";
	}
	// test 3
	// invalid input for hour, minute, second
	list <int> hr_boundaries({-1,0,24});
	list <int> min_boundaries({-1,0,60,61});
    list <int> sec_boundaries({-1,0,60,61});
    cout<<"Test 3 Subsections:\n";
    for(int val : hr_boundaries ){
        clockType test3(val,0,0);
        test3.getTime(test_hr,test_min,test_sec);
        if(test_hr != 0) {
            cerr << "\tTest 3 failed for hour input:" << val;
            return 0;
        }
    }
    cout<< "\tTest 3 - hour boundary test passed\n";

    for(int val :  min_boundaries){
        clockType test3(0,val,0);
        test3.getTime(test_hr,test_min,test_sec);
        if(test_min != 0) {
            cerr << "\tTest 3 failed for minute input:" << val;
            return 0;
        }
    }
    cout<< "\tTest 3 - minute boundary test passed\n";

    for(int val: sec_boundaries){
        clockType test3(0,0,val);
        test3.getTime(test_hr,test_min,test_sec);
        if(test_sec != 0) {
            cerr << "\tTest 3 failed for sec input:" << val;
            return 0;
        }
    }
    cout<< "\tTest 3 - second boundary test passed\n";



	// Test 4 will test all increment functions at the same time
	clockType test4(23,59,59);
	test4.incrementSeconds();
	test4.getTime(test_hr,test_min, test_sec);
	if(test_hr == 0 && test_min == 0 && test_sec == 0){
	    cout<<"Test 4 passed! Printed time: ";
	    test4.printTime();
	    cout<<endl;

	}
	else{
	    cout<<"Test 4 failed. Expected increment 23:59:59 --> 00:00:00\n"<<"Actual: 23:59:59 -->";
	    test4.printTime();
	}

	//Test 5. Test the equalTime function by making a copy of the test4 data
//	clockType test5 = test4;
//	if(test5.equalTime(test4)){
//	    cout<<"Test 5 passed";
//	}
//	else{
//	    cout<<"Test 5 failed";
//	}
//
    return 0;
}
