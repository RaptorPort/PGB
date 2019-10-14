#ifndef TESTDIALOG_H
#define TESTDIALOG_H

#include <QDialog>
#include <QCheckBox>
#include <QLabel>
#include <QLabel>
#include <QPushButton>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

class TestDialog : public QDialog
{
	Q_OBJECT

public:
	TestDialog(QWidget* parent = 0);

signals:
	void save(const QString& str, Qt::CaseSensitivity cs);
	void cancel(const QString& str, Qt::CaseSensitivity cs);

private slots:
	void findClicked();
	void enableSaveButton(const QString& text);

private:
	QLabel* label;
	QLineEdit* lineEdit;
	QPushButton* saveButton;
	QPushButton* cancelButton;
};

#endif
