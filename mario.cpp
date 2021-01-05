#include "mario.h"

Mario::Mario() : Character(){}

Mario::~Mario() {};

std::string Mario::WhatAmI() const
{
	return std::string("Mario");
};