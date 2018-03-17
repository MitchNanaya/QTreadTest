#include "Thread.h"
Thread::Thread(int input)
{
	//isWork = true;
	i = input;

}
Thread::~Thread()
{
	;
}
void Thread::doWork(const int &parameter) {
	int result;

	result = parameter;
	while (isWork) {	
		result += 1;
		i += result;
		/* ... here is the expensive or blocking operation ... */
		emit resultReady(i);
		QThread::sleep(1);
		
	}
	
}

