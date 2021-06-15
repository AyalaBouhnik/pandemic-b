#pragma once
#include "Player.hpp"


namespace pandemic{
class Medic: public Player{

	public: 

	Medic(pandemic::Board& b, City city):Player(b, city, "Medic"){}
	
	Player& treat(City city)override; //takes down all the diseas-cubes from the city he is standing on(-not just one).
	
	Player& drive(City city)override;
	
	Player& fly_direct(City city)override;
	
	Player& fly_charter(City city)override;
	
	Player& fly_shuttle(City city)override;
	
	
	//uniq case.
	
	};
	}
