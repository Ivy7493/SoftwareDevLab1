#include <iostream>
#include "StopWatch.h"


int main() {

	Watch Timer;

	if (Timer.startTimer()) {

		//Test code here
		for (int i = 0; i < 5; i++) {
			std::cout << "Working..." << std::endl;
		}

	}
	auto ans = Timer.endTimer();
	std::cout << "Time Taken: " << ans << std::endl;
	


	return 0;
}



