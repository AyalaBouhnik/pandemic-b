#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Medic.hpp"
using namespace pandemic;

/*takes down all the diseas-cubes from the city he is standing on(-not just one).*/
/*if there is a cure to the deases in the city he is standing on, he automatically takes of all the deases cubes.*/


Player& Medic:: treat(City city){
	Player::treat(city);
	b[city] = 0;
	return *this;
}
//-------------------------------------------------------------------------
	
Player& Medic::drive(City city){
	Player::drive( city);
	if(b.cures.find(Board::city_color[city]) != b.cures.end()){
		b[this->city] = 0;
	}
	return *this;
}
//-------------------------------------------------------------------------
	
Player& Medic:: fly_direct(City city){
	Player::fly_direct( city);
	if(b.cures.find(Board::city_color[city])  != b.cures.end()){
		b[this->city] = 0;
	}
	return *this;
}
//-------------------------------------------------------------------------
	
Player& ::Medic:: fly_charter(City city){
	Player:: fly_charter( city);
	if(b.cures.find(Board::city_color[city]) != b.cures.end()){
		b[this->city] = 0;
	}
	return *this;
}
//-------------------------------------------------------------------------
	
Player& Medic::fly_shuttle(City city){
	Player:: fly_shuttle (city);
	if(b.cures.find(Board::city_color[city]) != b.cures.end()){
		b[this->city] = 0;
	}
	return *this;
}
