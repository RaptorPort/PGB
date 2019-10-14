#include <QtGui>
#include <QObject>

#include "testDialog.h"

TestDialog::TestDialog(QWidget* parent) : QDialog(parent)
{
	label = new QLabel("Family Name:");
	lineEdit = new QLineEdit;

	saveButton = new QPushButton("Save");
	saveButton->setDefault(true);
	saveButton->setEnabled(false);

	cancelButton = new QPushButton("Cancel");

	QObject::connect(&lineEdit, SIGNAL(textChanged(const QString&)),
		this, SLOT(enableSaveButton(const QString&)));
};

