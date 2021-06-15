#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"

namespace pandemic{
class Virologist: public Player{
 

public:
	Virologist(Board& b, City city):Player(b, city, "Virologist"){}

	Player& treat(City city)override; //can do this action in any city of the world- it doesnt matter in what city she is.(she need to throw away this city card).

};
}
