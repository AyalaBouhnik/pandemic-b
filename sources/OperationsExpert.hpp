#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"

namespace pandemic{

class OperationsExpert: public Player{

public:

	OperationsExpert(pandemic::Board& b, City city):Player(b, city, "OperationsExpert"){}	

	Player& build()override; //can do this action without throwing any suitable card
//override
};
}
