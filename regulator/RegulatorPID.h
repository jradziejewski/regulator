#pragma once
#include <iostream>
#include "Regulator.h"

class RegulatorPID :
    public Regulator
{
private:
    float kp = 4;
    float ki = 0.02;
    float kd = 0.1;
    float ec = 0;
    float ep = 0;
public:
    void steruj(float _zadanaTemperatura, float _dt);
};

