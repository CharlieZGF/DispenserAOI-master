#include "mainwindow.h"
#include <opencv.hpp>
#include <QtWidgets/QApplication>

using namespace cv;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Mat m;
	QtMainWindow w;
	w.show();
	return a.exec();
}
