#include "RegulatorBB.h"

void RegulatorBB::steruj(float _zadanaTemperatura, float _dt) {
	if (pomieszczenie->getTemperatura() >= _zadanaTemperatura) {
		grzejnik->setPoziomMocy(0);
	} else grzejnik->setPoziomMocy(1);
}