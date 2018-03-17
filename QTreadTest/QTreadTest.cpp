#include "QTreadTest.h"

QTreadTest::QTreadTest(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	
	work->moveToThread(&workerThread);
	//connect(&workerThread, &QThread::finished, work, &QObject::deleteLater);
	connect(this, &QTreadTest::operate1, work, &Thread::doWork);
	connect(work, &Thread::resultReady, this, &QTreadTest::handleResults);
	workerThread.start();
	
}
void QTreadTest::handleResults(const int &put) {
	getput = put;
	ui.label->setText(QString::number(getput));
}


void QTreadTest::on_butten_click()
{
	if (!is_thread) {
		is_thread = true;
		work->isWork = true;
		emit operate1(5);
		ui.pushButton->setText(QString("QThread Stop"));

	}
	else {
		is_thread = false;
		work->isWork = false;
		//workerThread.wait(3);
		//workerThread.exit(0);
		//workerThread.quit();

		ui.pushButton->setText(QString("QThread Start"));
		
	}

}
