#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "Researcher.hpp"
using namespace pandemic;

/*can discover cure in any city- it dosent matter were she is.*/

Player& pandemic::Researcher:: discover_cure(Color c){
	if(b.cures.find(c) != b.cures.end()) return *this;
	int count = 0;
	for(City i : my_cards){
	if(Board::city_color[i] == c) count++;
	if (count == 5) break;	
	}
	if(count == 5){
	int how_many_to_del = 5;
	for(City i : my_cards){
	if(Board::city_color[i] == c && how_many_to_del > 0){
		my_cards.erase(i);
		how_many_to_del--;
	}
	}
	b.cures.insert(c);
	}
	else{
		throw invalid_argument("Researcher: You are tring to discover cure but you have less then 5 cards from the same color");
	}
	return *this;
	
}
	

