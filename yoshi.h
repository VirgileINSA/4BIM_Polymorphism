#include <iostream>
#include "character.h"
#include <string>

class Yoshi : public Character
{
	public:

		Yoshi(int c);
		std::string WhatAmI() const override;
		~Yoshi() override = default;
		void Accelerate() override;

	protected :

		int crests_ ;
};