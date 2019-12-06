#ifndef EDITITEMDIALOG_H
#define EDITITEMDIALOG_H
#include <QDialog>
#include "stockitem.h"

namespace Ui {
	class EditItemDialog;
}

class EditItemDialog : public QDialog {
	Q_OBJECT


public:
	explicit EditItemDialog(QWidget* parent = nullptr);
	~EditItemDialog();
	bool runDialog(StockItem& item);


private:
	Ui::EditItemDialog* ui;
	StockItem* result;
};
#endif
