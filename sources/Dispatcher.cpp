#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Dispatcher.hpp"
using namespace pandemic;

/* if he is in research station he can fly direct wherever he want's, without throwing any card. */

	Player& pandemic::Dispatcher::fly_direct(City city){
	/*if he in resarch station*/ 
		if(b.reaserch_stations.find(this->city) != b.reaserch_stations.end()){
			this->city = city;
			return *this;
		}
		
	/*if he is not in a resarch station*/ 
	else{
		if(my_cards.find(this->city) != my_cards.end()){
			my_cards.erase(city);
			this->city = city;
			return *this;
		}
		else{ //-if you dont have the right card
			throw invalid_argument("Dispatcher: you are tring to do the fly direct action, but you are not in a research station and you dont have the right card to do the ""regular"" action");
		}
}
}
