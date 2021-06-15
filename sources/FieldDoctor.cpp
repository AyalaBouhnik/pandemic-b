#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "FieldDoctor.hpp"
using namespace pandemic;

/* can do this action in the city he is standing on or in any close city without throwing a city card.  */


Player& pandemic::FieldDoctor::treat(City city){

	if(b.disease.find(city) == b.disease.end() || b.disease.at(city) == 0)
		throw invalid_argument("FieldDoctor: you are tring to do the treat action, but there is no disease");

	if(this->city != city || Board::cities_mp[this->city].find(city) == Board::cities_mp[this->city].end())
		throw invalid_argument("FieldDoctor: you are tring to do the treat action, but you are not in the city or connected to the city");

	if(b.cures.find(b.city_color.at(city)) != b.cures.end())  b.disease[city] = 0;
	
	else{
		if(b.disease[this->city] > 0){
	 		b.disease[this->city] = b.disease[this->city]-1;
	}
		}
	return *this;

	}
	 


