#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Virologist.hpp"
using namespace pandemic;

/* can treat in any city of the world- it doesnt matter in what city she is.(she need to throw away this city card). */

Player& Virologist::treat(City city){

	if(b.disease.find(city) == b.disease.end() || b.disease[city] == 0) 
		throw invalid_argument("Virologist: you aretring to treat a city that have no disease");

	if(b.cures.find(b.city_color.at(city)) != b.cures.end()){
		b.disease[city] = 0;
		my_cards.erase(city);
	}
	
	else{
		b.disease[city] = b.disease[city]-1;
		my_cards.erase(city);
	}
	return *this;
	}
	



