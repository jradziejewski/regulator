#pragma once
#include <iostream>
#include "Regulator.h"

class RegulatorPID :
    public Regulator
{
private:
    float kp;
    float ki;
    float kd;
    float ec;
    float ep;
public:
    RegulatorPID()
        : kp(4)
        , ki(0.02)
        , kd(0.1)
        , ec(0)
        , ep(0)
    {};
    void steruj(float _dt);
};

