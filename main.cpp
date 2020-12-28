#include <iostream>
#include "character.h"

int main(int argc, char const *argv[])
{
	Character* Luigi = new Character() ;
	std::cout << Luigi->speed() << std::endl;

	Luigi->Accelerate();
	Luigi->Accelerate();
	Luigi->Accelerate();
	Luigi->Accelerate();

	std::cout << Luigi->speed() << std::endl;

	Luigi->Break();
	Luigi->Break();
	Luigi->Break();
	Luigi->Break();

	std::cout << Luigi->speed() << std::endl;

	Luigi->Break();

	Luigi->Set_speed_to_ten();

	std::cout << Luigi->speed() << std::endl;

	Luigi->Accelerate();

	return 0;
}