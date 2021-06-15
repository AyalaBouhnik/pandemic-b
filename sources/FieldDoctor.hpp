#pragma once
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"



namespace pandemic{
class FieldDoctor: public Player{ 


public:
	FieldDoctor(Board& b, City city):Player(b ,city, "FieldDoctor"){}
		
	Player& treat(City n_city) override; //can do this action in the city he is standing on or in any close city without throwing a city card. 

};
}
