#include "Grzejnik.h"

Grzejnik::Grzejnik(float _mocNominalna) : mocNominalna(_mocNominalna) {
	if (mocNominalna > 1) mocNominalna = 1;
}