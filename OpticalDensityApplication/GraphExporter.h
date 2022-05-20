#pragma once
#include <fstream>

#include "InputParameters.h"
#include "qcustomplot.h"



class GraphExporter {


	QCustomPlot* _plot{ nullptr };
public:

	void ExportGraphs(const QString& iExportPath) {
		
	}


	void setPlot(QCustomPlot* iPlot) {
		_plot = iPlot;
	}

private:
	void ExportGraph(const QString& iExportPath, QCPGraph* iGraph) {
		QFile exportFile{ iExportPath + iGraph->name() + ".txt"};

		const auto& graphData = iGraph->data();

		for (auto i = 0; i < graphData->size(); ++i) {
			exportFile << graphData->at(0)->key << '\t' << graphData->at(0)->value << '\n';
		}
		
	}
};