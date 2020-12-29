#include <iostream>
#include "character.h"
#include <string>

class Mario : public Character
{
	public:

		Mario();
		std::string WhatAmI() const override;
		~Mario() override = default;
};