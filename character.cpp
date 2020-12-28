#include <iostream>
#include "character.h"

// Constructors

Character::Character(){
	speed_ = 0;
	max_speed_ = 10;
};

// Functions

void Character::Accelerate(){
	if(this->speed_ >= max_speed_){
		std::cout << "You can't accelerate because you're already too fast !" << std::endl;
	}

	else if(this->speed_ < 0){
		std::cout << "Before accelerating try to engage first gear ... " << std::endl << "Your speed was set to one" << std::endl;
		speed_ = 1;
	}

	else if(this->speed_ >= 0 and this->speed_ < this->max_speed_){
		speed_ += 1;
	}
	
};

void Character::Break(){
	if(this->speed_ > max_speed_){
		std::cout << "Finally you break !" << std::endl << "You were going way too fast so your speed was set to the limited max speed" << std::endl;
		speed_ = max_speed_;
	}

	else if(this->speed_ <= 0){
		std::cout << "Why breaking if you're not even in first gear" << std::endl << "Your speed was set to zero" << std::endl;
		speed_ = 0;
	}

	else if(this->speed_ > 0 and this->speed_ <= this->max_speed_){
		speed_ -= 1;
	}
};

void Character::Set_speed_to_ten(){
	speed_ = 10;
}

