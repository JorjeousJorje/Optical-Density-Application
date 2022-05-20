#pragma once
#include <QMenu>

class QMenu;

class SubMenu: public QMenu {
	Q_OBJECT
public:
	explicit SubMenu(QMenu*);
	virtual void initSubMenu() = 0;
};
