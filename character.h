#include <iostream>

class Character
{
	public:

		// Constructors

		Character();
		Character(Character* Character);

		// Destructor

		~Character() = default ;

		// Functions

		void Accelerate();
		void Break();

		// Getter

		inline float speed() const;

	protected:

		// Attributes
		float speed_ ;
		float max_speed_ ;
		
};