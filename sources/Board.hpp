#pragma once
#include <iostream>
#include <map>
#include <set>
#include "City.hpp"
#include "Color.hpp"


namespace pandemic{

class Board{

public:
	static std::map<City,std::set<City>> cities_mp;

	static std::map<City, Color> city_color; 
	
	 std::set<City> reaserch_stations; 
	
	 std::set<Color> cures;
	
	 std::map<City,int> disease;
	
	
	
public:
	Board(){}	
	
   	int& operator[](const City& city);
   	
   	const int& operator[](const City& city)const ;
	
	bool is_clean();
	
	void remove_cures();

	void remove_stations();
	
	friend std::ostream& operator<<(std::ostream& output, const pandemic::Board b);

};
}
