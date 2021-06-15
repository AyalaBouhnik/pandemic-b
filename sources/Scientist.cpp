#include "Scientist.hpp" 
#include "Player.hpp"
#include "Board.hpp"
#include "Color.hpp"
#include "City.hpp"
using namespace pandemic;

/* can discovr cure in n cards instead of 5*/

Player& Scientist:: discover_cure(Color c){

	if(b.cures.find(c) != b.cures.end()) return *this; //the cure already exist.
	if(b.reaserch_stations.find(this->city) == b.reaserch_stations.end())
		throw invalid_argument("Scientist: you are tring to discover cure but you are ot in a research station - you CAN'T do it");
	else{
		int count = 0;
		for(City i : my_cards){
			if(Board::city_color[i] == c){
			count++;	
			if(count == number_of_cards) break;
			} //-close if
		}//- close for loop
	
	if(count >= number_of_cards){
		int how_many_to_del = number_of_cards;
		for(City i : my_cards){
			if(Board::city_color[i] == c && how_many_to_del> 0){
				my_cards.erase(i);
				how_many_to_del--;
				if(how_many_to_del == 0) break;
			}
		}//-close for loop
		b.cures.insert(c);
	}

	return *this;

}
}
