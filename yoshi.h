#include <iostream>
#include "character.h"
#include <string>

class Yoshi : public Character
{
	public:

		Yoshi();
		std::string WhatAmI() const override;
		~Yoshi() = default;
		void Accelerate() override;
};