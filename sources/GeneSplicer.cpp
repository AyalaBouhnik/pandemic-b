#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "GeneSplicer.hpp"
using namespace pandemic;

/*can do discover cure in whatever 5 colors she wants- it dosent need to be in the same color of the diseas. */

Player& GeneSplicer::discover_cure(Color c){ 
	if(b.reaserch_stations.find(this->city) != b.reaserch_stations.end()){
	if(my_cards.size() > 5){
	int how_many_to_del = 5;
	for(City i : my_cards){
	if(how_many_to_del > 0){
	my_cards.erase(i);
	how_many_to_del--;
	}
	}
	b.cures.insert(c);
	}
	return *this;
	}
	else{
	throw invalid_argument("GeneSplicer: you are tring to discover cure, but you are not in a research station- you MUST be in research station in order to do this action");
	}
	}
	



