#include <iostream>
#include "character.h"
#include "yoshi.h"
#include "mario.h"

int main(int argc, char const *argv[])
{
	// Can't use anymore because the character class became virtual.
	// Character* Luigi = new Character() ;
	// std::cout << Luigi->speed() << std::endl;
	// Luigi->Accelerate();
	// Luigi->Accelerate();
	// Luigi->Accelerate();
	// Luigi->Accelerate();
	// std::cout << Luigi->speed() << std::endl;
	// Luigi->Break();
	// Luigi->Break();
	// Luigi->Break();
	// Luigi->Break();
	// std::cout << Luigi->speed() << std::endl;
	// Luigi->Break();
	// Luigi->Set_speed_to_ten();
	// std::cout << Luigi->speed() << std::endl;
	// Luigi->Accelerate();

	Yoshi yoshi;
	Mario mario;

	std::cout << "I am " << yoshi.WhatAmI() << std::endl;
	std::cout << "And I am " << mario.WhatAmI() << std::endl;

	return 0;
}