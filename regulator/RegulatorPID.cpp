#include "RegulatorPID.h"

void RegulatorPID::steruj(float _zadanaTemperatura, float _dt) {
	float up, ui, ud, e;


	//Up
	e = _zadanaTemperatura - pomieszczenie->getTemperatura();
	up = kp * e;

	//Ui
	ec += e * _dt;
	ui = ki * ec;

	//Ud
	float de = (e - ep) / _dt;
	ud = kd * de;

	ep = e;
	grzejnik->setPoziomMocy(up + ui + ud);
}