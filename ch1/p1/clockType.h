//clockType.h, the specification file for the class clockType

class clockType
{
public:
	void setTime(int hours, int minutes, int seconds);
	// Function to set the clock's time
	// Function should check whether the input values are valid, otherwise a
	// default value of 0 is set for each invalid field
	
	void getTime(int& hours, int& minutes, int& seconds);
	// Function returns time value for clock
	// postcon: hours = hr, minutes = min, seconds = sec
	
	void printTime() const;
	// Function prints time value
	
	void incrementSeconds();
	// Function increases the seconds value by 1
	// postcon: The time is increased by one second
	// minute and hour values are updated as needed. 23:59:59 --> 00:00:00
	
	void incrementMinutes();
	// Function increases the minutes value by 1
	// postcone: The time is increased by one minute
	// hour value is updated as needed. 11:59:00 --> 12:00:00
	
	void incrementHours();
	// Function increases the hours value by 1
	// postcon: The time is increased by one hour. 23:00:00 --> 00:00:00
	
	bool equalTime(const clockType& otherClock);
	// Function checks whether the time value of object is equal to that of another clockType object
	// postcon: Returns true if the two values are equal, and false otherwise
	
	clockType(int hours, int minutes, int seconds);
	// Constructor with input time parameters
	// postcon: hr = hours, min = mintutes, sec = seconds
	
	clockType();
	// Default constructor - does not take any inputs
	// postcon: time set do default - hr = 0, min = 0, sec = 0

private:
	int hr; // stores hour val
	int min; //stores minute value
	int sec; // stores second value
};


