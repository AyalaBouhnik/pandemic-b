#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"

namespace pandemic{

class Researcher: public Player{

	
	public:
	Researcher(Board b, City city):Player(b, city, "Researcher"){}	

	Player& discover_cure(Color c) override; //can do this action in any city- it dosent matter were she is.
	//override
};
}
