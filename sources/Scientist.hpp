#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"


namespace pandemic{

class Scientist: public Player{

private:
	int number_of_cards;

public:
	Scientist(Board& b, City  city, int number_of_cards):Player(b, city, "Scientist") { //to add"number_of_cards(number_of_cards)
	number_of_cards = number_of_cards;
	}	
	
	
	Player& discover_cure(Color c) override; //can do this action with n cards instead of 5.
//override
};
}
