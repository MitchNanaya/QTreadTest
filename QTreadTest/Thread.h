#pragma once
#include <QThread.h>
class Thread : public QObject {
	Q_OBJECT

public slots:
	void doWork(const int &parameter);

signals:
	void resultReady(const int &result);
public: 
	Thread(int input);
	~Thread();
	int i = 0;
	bool isWork = false;

	
	
};