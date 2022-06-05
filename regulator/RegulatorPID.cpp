#include "RegulatorPID.h"

void RegulatorPID::steruj(float _dt) {
	if (_dt == 0) throw "Bledny czas. Regulator PID nie moze dzielic przez 0.";
	float up, ui, ud, e;


	//Up
	e = zadanaTemperatura - pomieszczenie->getTemperatura();
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