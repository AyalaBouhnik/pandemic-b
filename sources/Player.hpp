#pragma once
#include "Color.hpp"
#include "City.hpp"
#include <string>
#include "Board.hpp"

namespace pandemic{
class Player{

public:
	
	Player(Board& b1, City city1, std::string my_role1= "Player"):b(b1),city(city1), my_role(my_role1){}	

protected: //we can use those varibales only for the mambers.


	City city;
	std::string my_role;
	pandemic::Board& b;
	std::set<City> my_cards;
	
public:
	
	
	virtual Player& drive(City city);

	virtual Player& fly_direct(City city);
	
	virtual Player& fly_charter(City city);

	virtual Player& fly_shuttle(City city);

	virtual Player& build();

	virtual Player& discover_cure(Color c); //I need to check if there is resarch station.

	virtual Player& treat(City city);

/////every function needs to update the board and the player station behtaem.

	std::string role() const; //this function needs to return the player tafkid.
 
	Player& take_card(City city); //always works!
 
 };
 }
 
