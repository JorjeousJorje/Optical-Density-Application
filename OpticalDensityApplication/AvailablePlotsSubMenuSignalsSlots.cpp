#include "AvailablePlotsSubMenu.h"
#include "OpticalDencityPipeline.h"
#include "qcustomplot.h"

void AvailablePlotsSubMenu::plotAllGraphs() {
    plotEpsilonReal();
    plotEpsilonImag();
    plotRealRefractiveIndex();
    plotImaginaryRefractiveIndex();
    plotReflectiveCoefficientR12();
    plotPhase();
    AbsorptionCoefficient();
    plotOpticalDensityNoInterference();
    plotFilmTransmission();
    plotOpticalDensity();
    plotExperimentalSpectrum();
}


void AvailablePlotsSubMenu::plotEpsilonReal() {
    if (pipeline->epsReal.size() > 0) {
        QVector<double> epsReal(pipeline->epsReal.size());
        std::copy(std::begin(pipeline->epsReal), std::end(pipeline->epsReal), epsReal.begin());
        createGraph(pipeline->qVectorFreq, epsReal, QColor{ 168, 74,92 }, "epsilon (real)");

    }
}

void AvailablePlotsSubMenu::plotEpsilonImag() {
    if (pipeline->epsImag.size() > 0) {
        QVector<double> epsImag(pipeline->epsImag.size());
        std::copy(std::begin(pipeline->epsImag), std::end(pipeline->epsImag), epsImag.begin());
        createGraph(pipeline->qVectorFreq, epsImag, QColor{ 40, 114 ,123 }, "epsilon (imaginary)");

    }
}

void AvailablePlotsSubMenu::plotRealRefractiveIndex() {
    if (pipeline->n.size() > 0) {
        QVector<double> n(pipeline->n.size());
        std::copy(std::begin(pipeline->n), std::end(pipeline->n), n.begin());
        createGraph(pipeline->qVectorFreq, n, QColor{ 255, 0 ,0 }, "Refractive Index (real)");

    }
}

void AvailablePlotsSubMenu::plotImaginaryRefractiveIndex() {
    if (pipeline->k.size() > 0) {
        QVector<double> k(pipeline->k.size());
        std::copy(std::begin(pipeline->k), std::end(pipeline->k), k.begin());
        createGraph(pipeline->qVectorFreq, k, QColor{ 0, 0 ,255 }, "Refractive Index (im)");
    }
}
void AvailablePlotsSubMenu::plotReflectiveCoefficientR12() {
    if (pipeline->R12.size() > 0) {
        QVector<double> R12(pipeline->R12.size());
        std::copy(std::begin(pipeline->R12), std::end(pipeline->R12), R12.begin());
        createGraph(pipeline->qVectorFreq, R12, QColor{ 0, 255,255 }, "R12");
    }
}
void AvailablePlotsSubMenu::plotPhase() {
    if (pipeline->phi12.size() > 0) {
        QVector<double> phi12(pipeline->phi12.size());
        std::copy(std::begin(pipeline->phi12), std::end(pipeline->phi12), phi12.begin());
        createGraph(pipeline->qVectorFreq, phi12, QColor{ 128,0,0 }, "Phase (phi12)");
    }
}
void AvailablePlotsSubMenu::AbsorptionCoefficient() {
    if (pipeline->a.size() > 0) {
        QVector<double> a(pipeline->a.size());
        std::copy(std::begin(pipeline->a), std::end(pipeline->a), a.begin());
        createGraph(pipeline->qVectorFreq, a, QColor{ 255,0,255 }, "Absorption Coefficient (a)");
    }
}
void AvailablePlotsSubMenu::plotOpticalDensityNoInterference() {
    if (pipeline->D.size() > 0) {
        QVector<double> D(pipeline->D.size());
        std::copy(std::begin(pipeline->D), std::end(pipeline->D), D.begin());
        createGraph(pipeline->qVectorFreq, D, QColor{ 255,255,0 }, "OpticalDensity (D)");
    }
}
void AvailablePlotsSubMenu::plotFilmTransmission() {
    if (pipeline->T.size() > 0) {
        QVector<double> T(pipeline->T.size());
        std::copy(std::begin(pipeline->T), std::end(pipeline->T), T.begin());
        createGraph(pipeline->qVectorFreq, T, QColor{ 0,255,0 }, "Film transmission (T)");
    }
}
void AvailablePlotsSubMenu::plotOpticalDensity() {
    if (pipeline->A.size() > 0) {
        QVector<double> A(pipeline->A.size());
        std::copy(std::begin(pipeline->A), std::end(pipeline->A), A.begin());
        createGraph(pipeline->qVectorFreq, A, QColor{ 133,115,165 }, "OpticalDensity (A)");
    }
}
void AvailablePlotsSubMenu::plotExperimentalSpectrum() {
    if (!experimentalSpectrum.opt_density.empty()) {
        createGraph(experimentalSpectrum.freq, experimentalSpectrum.opt_density, QColor{ 29, 233, 182 }, "Experimental Spectrum");
    }
}


void AvailablePlotsSubMenu::setAxisFlag() {
    const auto* buttonSender = qobject_cast<QPushButton*>(sender());

    if (buttonSender->isChecked()) {
        createNewAxis = true;
        return;
    }
    createNewAxis = false;
}

void AvailablePlotsSubMenu::loadExperimentalSpectrum(const QString& iPath) {

    try {
        experimentalSpectrum = _loader.loadData(iPath.toStdString());
        emit emitParingMessage("<ExperimentalSpectrumLoader>: successfully loaded!", true);
    } catch (const std::runtime_error& ex) {
        const auto* message = ex.what();
        emit emitParingMessage(QString(message), false);
    }
	
}

