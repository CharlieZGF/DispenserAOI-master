#include "ui_main_window.h"

class QtMainWindow : public QMainWindow
{
	Q_OBJECT

public:
	QtMainWindow(QWidget *parent = Q_NULLPTR);

private:
	Ui_MainWindowClass ui;
};
