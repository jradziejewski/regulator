#include "RegulatorBB.h"

float RegulatorBB::steruj(float _zadanaTemperatura, float _zmierzonaTemperatura, float _dt) {
	zadanaTemperatura = _zadanaTemperatura;
	if (_zmierzonaTemperatura >= _zadanaTemperatura) {
		return 0;
	}
	return 1;
}