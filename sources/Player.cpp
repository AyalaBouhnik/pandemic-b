#include "Board.hpp"
#include "Player.hpp"
#include <string>
#include <map>
using namespace pandemic;

/*every function needs to update the board and the player station behtaem.*/

//------------------------------------------------------------------------------------------------------------------------------------
Player& Player::drive(City to_city){
	if( to_city == this->city) throw invalid_argument("you are tring to drive to a city you are in now-you CAN'T do this");
	if(Board::cities_mp[this->city].find(to_city) != Board::cities_mp[this->city].end()){
	this->city = to_city;
	return *this;
	}
	else{
		throw invalid_argument("you are tring to drive to a not connected city- yoc CAN'T do this");
	}
	}

//-----------------------------------------------------------------------------------------------------------------------------------	
	
Player& Player::fly_direct(City city_to_go){
	if(my_cards.find(city_to_go) == my_cards.end()) throw invalid_argument("you are tring to fly direct to destinition that you dont have in your cards- you CAN'T do this");
	else{
		this->city = city_to_go;
		my_cards.erase(city_to_go);
		return *this;
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------

Player& Player::fly_charter(City city1){
	if(my_cards.find(this->city) == my_cards.end())
	throw invalid_argument("you are tring to fly charter, but you dont have the card of the city you in right now- you CAN'T do it");
	
	if(my_cards.find(this->city) != my_cards.end()){
		my_cards.erase(this->city);
	this->city = city1;

	}
	return *this;
	
}

//-----------------------------------------------------------------------------------------------------------------------------------

Player& Player::fly_shuttle(City city_to_go){
	if(this -> city == city_to_go) throw invalid_argument("You are tring to fly shuttle to the city your in - you CAN'T do it");
	
	/*if the city that Im in now and the city I want to go to have a reaserch stations it's ok.*/
	
	if(b.reaserch_stations.find(this->city) != b.reaserch_stations.end()
	&& b.reaserch_stations.find(city_to_go) != b.reaserch_stations.end()){ //both have reaserch station
		this->city = city_to_go;
		return *this;
	}
	else{
		throw invalid_argument("you are tring to fly shuttle, but there is no research station in one of the cities - so you CAN'T do this action");
	}	
}

//-----------------------------------------------------------------------------------------------------------------------------------

Player& Player::build(){
	if(b.reaserch_stations.find(this->city) != b.reaserch_stations.end()) return *this;
	if(my_cards.find(this->city) != my_cards.end()){
		b.reaserch_stations.insert(this->city);
		my_cards.erase(this->city);
		//cards.insert(this->city);
		return *this;
	}
	else{
		throw invalid_argument("You are tring to build, but you dont have the card of the city your in right now - you CAN'T build");
	}
}
	
//-----------------------------------------------------------------------------------------------------------------------------------
	
Player& Player::discover_cure(Color c){
	if(b.cures.find(c) != b.cures.end()) return *this; //the cure already exist.
	if(b.reaserch_stations.find(this->city) == b.reaserch_stations.end()) throw invalid_argument("You are tring to discover cure , but there isn't research station - you CAN'T do this");
	else{
		int count = 0;
		for(City i : my_cards){
			if(Board::city_color[i] == c) count++;	
			if(count == 5) break;
		}//- close for loop
		if(count == 5){
			int how_many_to_del = 5;
			for(City i : my_cards){ //to chack why its work, not always workes- need to with operator.
				if(Board::city_color[i] == c && how_many_to_del> 0){
				my_cards.erase(i);
				how_many_to_del--;
				if(how_many_to_del == 0) break;
				}
			}//-close for loop
			b.cures.insert(c);
		}
		if(count < 5)
			throw invalid_argument("You are tring to discover cure, but you have less then 5 cards in the same color- you CAN'T do this");
	return *this;
	}
}

//-----------------------------------------------------------------------------------------------------------------------------------
 
Player& Player::treat(City city1){
//to edit

	if(this->city != city1) throw invalid_argument("You are tring to treat a city your not in- you CAN'T do this");
	
	if(b.disease.find(city) == b.disease.end() || b.disease.at(city) == 0)  
		throw invalid_argument("You are tring to treat a city that have no disease");
	
	if(b.cures.find(b.city_color.at(city)) != b.cures.end()){
	 	b.disease.at(city) = 0;
	}
	else{
		b.disease.at(city) = b.disease.at(city)-1;
	}
	
	return *this;
}

//-----------------------------------------------------------------------------------------------------------------------------------

string Player::role() const{ 
	return this->my_role;
}

//-----------------------------------------------------------------------------------------------------------------------------------
 
Player& Player::take_card(City city){
	my_cards.insert(city);
	return *this;
	} 
 //-----------------------------------------------------------------------------------------------------------------------------------
