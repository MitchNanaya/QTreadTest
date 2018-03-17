#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTreadTest.h"
#include "Thread.h"
class QTreadTest : public QMainWindow
{
	Q_OBJECT

public:
	Thread * work = new Thread(3);
	int getput;
	QThread workerThread;
	QTreadTest(QWidget *parent = Q_NULLPTR);
signals:
	void operate1(const int &pop);

public slots:
	void handleResults(const int &i);
	void on_butten_click();
private:
	Ui::QTreadTestClass ui;
	bool is_thread = false;

};
