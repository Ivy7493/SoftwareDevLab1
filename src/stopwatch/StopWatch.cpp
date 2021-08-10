#include "StopWatch.h"
#include <ctime>
#include <iostream>
using namespace std;

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 


double Watch::getProcessTime()
{
	clock_t time = clock();
	return static_cast<double>(time) / CLOCKS_PER_SEC;
}

bool Watch::startTimer()
{
	if (!this->TimerState) {
		this->TimerState = true;
		this->StartTime = this->getProcessTime();
		return true;
	}
	else if (this->TimerState) {
		return false;
	}
	return false;
}

double Watch::endTimer()
{
	if (this->TimerState) {
		this->TimerState = false;
		this->EndTime = this->getProcessTime();
		this->DeltaTime = (this->EndTime - this->StartTime);
		return this->DeltaTime;
	}
	else if (!this->TimerState) {
		cout << "Please Start Timer before you can stop it" << endl;
		return -1;
	}
	return 0.0;
}
