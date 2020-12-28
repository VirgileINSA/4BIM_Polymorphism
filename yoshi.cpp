#include "yoshi.h"

Yoshi::Yoshi() : Character(){}

std::string Yoshi::WhatAmI() const
{
	return std::string("Yoshi");
};

void Yoshi::Accelerate(){
	// Well, according to https://www.nintendolife.com/news/2017/05/guide_mario_kart_8_deluxe_fastest_kart_-_how_to_build_the_best_kart, 
	// Yoshi has a slightly higher base acceleration than Mario but for the sake of the exercice let's say that Yoshi has double Mario's acceleration !

	if(this->speed_ >= max_speed_){
		std::cout << "You can't accelerate because you're already too fast !" << std::endl;
	}

	else if(this->speed_ < 0){
		std::cout << "Before accelerating try to engage first gear ... " << std::endl << "Your speed was set to one" << std::endl;
		speed_ = 1;
	}

	else if(this->speed_ >= 0 and this->speed_ < this->max_speed_ -1){
		speed_ += 2;
	}
	else if(this->speed_ >= 0 and this->speed_ == this->max_speed_ -1){
		speed_ += 1;
	}
};
