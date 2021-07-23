#include "clockType.h"
#include <iostream>

using namespace std;
void clockType::setTime(int hours, int minutes, int seconds){
	if(hours > 23 || hours < 0){hr = 0;}
	else{hr = hours;}

	if(minutes > 59 || minutes < 0){min = 0;}
    else{min = minutes;}

    if(seconds>59 || seconds < 0){sec=0;}
    else {sec = seconds;}
}

void clockType::getTime(int& hours, int& minutes, int& seconds){
	hours = hr;
	minutes = min;
	seconds = sec;
}

void clockType::printTime() const{
	if(hr<10){
		cout<<"0"<<hr<<":";
	}
	if(min<10){
		cout<<"0"<<min<<":";
	}
	if(sec<10){
		cout<<"0"<<sec;
	}
}

void clockType::incrementSeconds(){
	sec++;
	if(sec > 59){
		incrementMinutes();
		sec = 0;
	}
}
void clockType::incrementMinutes(){
	min++;
	if(min > 59){
		incrementHours();
		min = 0;
	}
}

void clockType::incrementHours(){
	hr++;
	if(hr > 23){
		hr = 0;
	}
}

bool clockType::equalTime(const clockType& otherClock){
	if(hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec){
		return true;
	}
	else{
		return false;
	}
}
clockType::clockType(int hours, int minutes, int seconds){
	setTime(hours,minutes,seconds);
}
clockType::clockType(){
	setTime(0,0,0);
}