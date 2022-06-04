#pragma once
#include "Regulator.h"
class RegulatorBB :
    public Regulator
{
public:
    float steruj(float _zadanaTemperatura, float _zmierzonaTemperatura, float _dt);
};

