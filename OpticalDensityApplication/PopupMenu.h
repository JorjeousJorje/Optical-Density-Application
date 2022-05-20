#pragma once
#include <QtWidgets/QMenu>
#include "AvailablePlotsSubMenu.h"


class OpticalDensityApplication;
class SubMenu;
class QCustomPlot;

class PopupMenu : public QMenu {
	Q_OBJECT
public:

	OpticalDensityApplication& _app;
	QCustomPlot* _plot;
	AvailablePlotsSubMenu _availablePlotsSub;

	explicit PopupMenu(OpticalDensityApplication&);
	void setPlot(QCustomPlot*);

public slots:
	void contextMenuRequest(QPoint);

private:

	void initGraphRequest();
	void initLegendRequest();
};
