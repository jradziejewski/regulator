#include "RegulatorPID.h"

float RegulatorPID::steruj(float _zadanaTemperatura, float _zmierzonaTemperatura, float _dt) {
	float up, ui, ud, e;

	//Up
	e = _zadanaTemperatura - _zmierzonaTemperatura;
	up = kp * e;

	//Ui
	ec = ec + e * _dt;
	ui = ki * ec;

	//Ud
	float de = (e - ep) / _dt;
	ud = kd * de;

	return (up + ui + ud);
}