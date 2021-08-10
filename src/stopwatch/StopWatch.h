#ifndef STOPWATCH_H
#define STOPWATCH_H

// returns the amount of time in seconds that has passed since the process (i.e. your program) started executing 
class Watch {
public:
	double getProcessTime();
	bool startTimer();
	double endTimer();
private:
	bool TimerState = false;
	double StartTime;
	double EndTime;
	double DeltaTime;
};




#endif
