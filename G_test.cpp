#include "gtest/gtest.h"
// #include "character.h"
#include "yoshi.h"
#include "mario.h"
#include <vector>

// Doing some basic test on Gtest

TEST(GTest, test1){

    int i = 8;
    int j = 8;

    char c1[12] = "Hello world";
    char c2[12] = "Hello world";

    ASSERT_TRUE(true);
    ASSERT_EQ(i,j);
    ASSERT_STREQ(c1, c2);
}

/* Character Tests that doesn't work anymore since it's now a virtual class

// Testing Character constructor

Character* Luigi = new Character();
float sp = Luigi->speed();
float msp = Luigi->max_speed();

TEST(Luigi, constructor){
	EXPECT_EQ(sp, 0);
	EXPECT_EQ(msp, 10);
}

// Testing Set_speed_to_ten

Luigi->Set_speed_to_ten();

TEST(Character, Set_speed_to_ten){
	EXPECT_EQ(Luigi.speed(), 10);
}

// Testing Break

Test(Character, Break){
	float new_sp = Luigi->speed();
	Luigi->Break();
	sp_break = Luigi->speed();
	EXPECT_EQ(sp_break, new_sp-1);

	while(Luigi->speed() > 0){
		Luigi->Break();
	}

	EXPECT_EQ(Luigi->speed(), 0);
}

// Testing Accelerate

TEST(Character, Accelerate){

	Luigi->Accelerate();
	EXPECT_EQ(Luigi->speed(), sp+1);

	while(Luigi->speed() < msp){
		Luigi->Accelerate();
	}

    float new_sp2 = Luigi->speed();
    EXPECT_EQ(new_sp2, msp);
}

delete Luigi

*/


/* Yoshi Tests */

// Testing Yoshi constructor

Yoshi yoshi_3(3);
float yoshi_sp = yoshi_3.speed();
float yoshi_msp = yoshi_3.max_speed();

TEST(Yoshi, constructor){
	EXPECT_EQ(yoshi_sp, 0);
	EXPECT_EQ(yoshi_msp, 10);
}

// Testing Yoshi WhatAmI

TEST(Yoshi, WhatAmI){
	std::string test_str = " crested Yoshi";
	std::string test_str_3c = "3 crested Yoshi";
	std::string yoshi_str = yoshi_3.WhatAmI();

	EXPECT_GT(yoshi_str.size(), test_str.size());
	EXPECT_EQ(yoshi_str, test_str_3c);
}

// Testing Yoshi accelerate

TEST(Yoshi, Accelerate){

	// yoshi_sp is yoshi_3 speed and is 0
	// yoshi_msp is yoshi_3 speed and is 10

	yoshi_3.Accelerate();
	EXPECT_EQ(yoshi_3.speed(), yoshi_sp+2);

	while(yoshi_3.speed() < yoshi_msp){
		yoshi_3.Accelerate();
	}

    float new_sp = yoshi_3.speed();
    EXPECT_EQ(new_sp, yoshi_msp);
}

/* Mario Tests */

// Testing Mario constructor

Mario mario;
float mario_sp = mario.speed();
float mario_msp = mario.max_speed();

TEST(Mario, constructor){
	EXPECT_EQ(mario_sp, 0);
	EXPECT_EQ(mario_msp, 10);
}

// Testing Mario WhatAmI

TEST(Mario, WhatAmI){
	EXPECT_EQ(mario.WhatAmI(), std::string("Mario"));
}



// Following Tests are for the race !

// Creating the vector of drivers

std::vector <Character*> course {new Yoshi(2), new Yoshi(4), new Mario()};

// Here course[0] is the 2 crested Yoshi.
// course[1] is the 4 crested Yoshi.
// course[2] is Mario.

TEST(Race, every_test){

	// Testing that everyone start with speed = 0 with iterator loop

	for(std::vector<Character*>::iterator characters = course.begin(); characters != course.end(); ++characters){
    	EXPECT_EQ((*characters)->speed(), 0);
    }

	// Testing Accelerate on every racer with ranged-based loop

	for(auto& characters: course){
    	characters->Accelerate();
    	EXPECT_GT(characters->speed(), 0);
	}

	// Testing that the Yoshis accelerate at the same pace but faster than Mario

	float Y2_speed = course[0]->speed();
	float Y4_speed = course[1]->speed();
	float M_speed = course[2]->speed();
	
	EXPECT_EQ(Y2_speed, Y4_speed);
	EXPECT_GT(Y2_speed, M_speed);
	EXPECT_GT(Y4_speed, M_speed);

	for (auto& characters: course) {delete characters;}
}