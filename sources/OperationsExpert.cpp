#include "Player.hpp"
#include "Board.hpp"
#include "City.hpp"
#include "OperationsExpert.hpp"
using namespace pandemic;


/* can build without throwing any suitable card */

Player& OperationsExpert::build(){
	if(b.reaserch_stations.find(this->city) != b.reaserch_stations.end()) return *this;
	if(b.reaserch_stations.find(this->city) == b.reaserch_stations.end()){
		b.reaserch_stations.insert(this->city);
	}
	return *this;
	} 


