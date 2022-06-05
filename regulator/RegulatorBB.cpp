#include "RegulatorBB.h"

void RegulatorBB::steruj(float _dt) {
	if (pomieszczenie->getTemperatura() >= zadanaTemperatura) {
		grzejnik->setPoziomMocy(0);
	} else grzejnik->setPoziomMocy(1);
}