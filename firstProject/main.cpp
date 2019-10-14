#include "testDialog.h"

#include <QtGui>
#include <QWidget>
#include <QApplication>
#include <QInputDialog>

#include <QLabel>
#include <QWidget>
#include <QPushButton>
#include <QLayout>
#include <QGroupBox>

int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	TestDialog myDialog = testDialog();

	return app.exec();
}

/*
class DataInputDialog : public QDialog {
	Q_OBJECT

public:
	DataInputDialog(QDialog* parent = NULL) : QDialog(parent) {
		this->setWindowTitle("Dateneingabe mit Qt");

		QPushButton* but1 = new QPushButton("ok");
		QPushButton* but2 = new QPushButton("cancel");

		QGridLayout* layout = new QGridLayout();
		layout->addWidget(but1, 0, 0);
		layout->addWidget(but2, 0, 1);

		this->setLayout(layout);
	}
};
*/
