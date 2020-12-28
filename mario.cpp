#include "mario.h"

Mario::Mario() : Character(){}

std::string Mario::WhatAmI() const
{
	return std::string("Mario");
};