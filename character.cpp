#include <iostream>
#include "character.h"

// Constructors

Character::Character(){
	speed_ = 0;
	max_speed_ = 10;
};

// Functions

// Getters

inline float Character::speed() const{
	return speed_;
}

// Setters
