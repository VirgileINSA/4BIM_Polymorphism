#pragma once

#include <iostream>
#include <string>

class Character
{
	public:

		// Constructors

		Character();

		// Destructor

		virtual ~Character() = default ;

		// Functions

		virtual void Accelerate();
		void Break();
		void Set_speed_to_ten();

		virtual std::string WhatAmI() const = 0;

		// Getter

		inline float speed() const{
			return speed_;
		};

	protected:

		// Attributes
		float speed_ ;
		float max_speed_ ;
		
};