#pragma once
#include "Regulator.h"
class RegulatorPID :
    public Regulator
{
private:
    float kp = 4.0;
    float ki = 0.02;
    float kd = 0.1;
    float ec = 0;
    float ep = 0;
public:
    float steruj(float _zadanaTemperatura, float _zmierzonaTemperatura, float _dt);
};

