#include <iostream>
#include "character.h"
#include "yoshi.h"
#include "mario.h"
#include <vector>

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

	// delete Luigi

	Yoshi yoshi_3(3);
	Mario mario;

	std::cout << std::endl;

	std::cout << "I am " << yoshi_3.WhatAmI() << std::endl;
	std::cout << "And I am " << mario.WhatAmI() << std::endl;

	std::cout << "Yoshi and Mario are starting at speed "<< mario.speed() << std::endl;
	mario.Accelerate();
	mario.Accelerate();
	mario.Accelerate();
	mario.Accelerate();
	std::cout << "Mario is now at speed " << mario.speed() << std::endl;

	yoshi_3.Accelerate();
	yoshi_3.Accelerate();
	yoshi_3.Accelerate();
	yoshi_3.Accelerate();
	yoshi_3.Accelerate();
	yoshi_3.Break();
	yoshi_3.Break();
	yoshi_3.Break();
	std::cout << "Yoshi is now at speed " << yoshi_3.speed() << std::endl << std::endl;

	std::vector<Character*> course;
	course.push_back(new Yoshi(2));
	course.push_back(new Yoshi(4));
	course.push_back(new Mario());

	// Here course[0] is the 2 crested Yoshi.
	// course[1] is the 4 crested Yoshi.
	// course[2] is Mario.

	//Range based for
	for(auto& characters: course) {
    	characters->Accelerate();
	}

	// Using a for loop with iterator
	for(std::vector<Character*>::iterator characters = course.begin(); characters != course.end(); ++characters) {
    	(*characters)->Accelerate();
    }

	// Test of speed

	if (course[0]->speed() == course[1]->speed()){
		std::cout << "Both Yoshis have the same speed as expected !" << std::endl;
	} else {
		std::cout << "AH ... Something didn't go as planned" << std::endl;
	}

	if (course[0]->speed() > course[2]->speed()){
		std::cout << "Yoshi is faster than Mario as we predicted it !" << std::endl;
	} else {
		std::cout << "AH ... Something didn't go as planned" << std::endl;
	}

	std::cout << std::endl;

	for (auto& characters: course) {delete characters;}

	return 0;
}