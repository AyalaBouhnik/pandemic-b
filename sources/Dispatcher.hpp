#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"

namespace pandemic{
class Dispatcher: public Player{ 


public:
	Dispatcher(Board& b,City city):Player(b, city, "Dispatcher"){}
	
	Player& fly_direct(City city)override; //can do this action without throwing any suitable card.
	
	};
	}
