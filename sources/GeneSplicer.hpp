#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"


namespace pandemic{

class GeneSplicer:public Player{


public:
	GeneSplicer(Board& b, City city):Player(b, city, "GeneSplicer"){}	

	Player& discover_cure(Color c) override; //can do this action in whatever 5 colors she wants- it dosent needs to be in the same color of the diseas.

};
}
