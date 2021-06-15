#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
/* include special skills players */
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace pandemic;
#include <iostream>
#include <stdexcept>
#include <map>
#include <set>
#include <sstream>
using namespace std;

/*game for 1 player.
 You can choose what role ypu want to be(Medic, Scientist, Researcher..).
 In every turn you can chose what action you want to do.
 The aim of the game is to clear all the disease in the world-
 Good Luck!!!
*/

int main(){

        Board board;

        // defining disease levels:
        board[City::Algiers] = 1; // Color::Black
        board[City::Atlanta] = 1; // Color::Blue
        board[City::Baghdad] = 2; // Color::Black
        board[City::Bangkok] = 2; // Color::Red
        board[City::Beijing] = 2; // Color::Red
        board[City::Bogota] = 2; // Color::Yellow
        board[City::BuenosAires] = 2; // Color::Yellow

        int role_of_the_player;
	int action;
	City city; 
	Color color;

cout<< "Welcome! Let's start to play the Pandemic game :)" <<endl;

cout<< "Please enter what kind of player you want to be: /n 1-Operation Expert /n 2-Dispatcher /n 3-Scientist /n 4-Researcher /n 5-Medic /n 6-Virologist /n 7-GeneSplicer 8-FieldDoctor" <<endl;

cin>>role_of_the_player;


while(board.is_clean() == false){

print();

cout<< "Please Enter the action you want to do: /n 1-drive /n 2-fly direct /n 3- fly charter /n 4- fly shuttle /n 5-build /n 6-discover cure /n 7-treat 8- take card " <<endl;

cin>>action;

if(action>5 || action == 7){

	cout<< "Please choose a city: 	Algiers,Atlanta,Baghdad,Bangkok,Beijing,Bogota,BuenosAires,Cairo,Chennai,Chicago,Delhi,Essen,HoChiMinhCity,"
	<<"HongKong,Istanbul,Jakarta,Johannesburg,Karachi,Khartoum,Kinshasa,Kolkata,Lagos,Lima,London,LosAngeles,Madrid,"<<
	"Manila,MexicoCity,Miami,Milan,Montreal,Moscow,Mumbai,NewYork,Osaka,Paris,Riyadh,SanFrancisco,Santiago,SaoPaulo,Seoul,"<<
	"Shanghai,StPetersburg,Sydney,Taipei,Tehran,Tokyo,Washington" <<endl;

	cin>>city;
}

if(action == 6){
	cout<<"please choose a color: Black,Red,Yellow or Blue."<<endl;
	cin>>color;
}

	if(role_of_the_player == 1){//-Operation Expert abilitis
		OperationsExpert operationsExpert(board, City::Algiers)
		if(action == 1) operationsExpert.drive(city);
		if(action == 2) operationsExpert.fly_direct(city);
		if(action == 3) operationsExpert.fly_charter(city);
		if(action == 4) operationsExpert.fly_shuttle(city);
		if(action == 5) operationsExpert.build();
		if(action == 6) operationsExpert.discover_cure(color);
		if(action == 7) operationsExpert.treat(city);
		if(action == 8) operationsExpert.take card(city);
	}
		
	if(role_of_the_player == 2){//-Dispatcher abilitis
		Dispatcher dispatcher(board, City::Algiers);
		if(action == 1) dispatcher.drive(city);
		if(action == 2) dispatcher.fly_direct(city);
		if(action == 3) dispatcher.fly_charter(city);
		if(action == 4) dispatcher.fly_shuttle(city);
		if(action == 5) dispatcher.build();
		if(action == 6) dispatcher.discover_cure(color);
		if(action == 7) dispatcher.treat(city);
		if(action == 8) dispatcher.take card(city);
	}

	if(role_of_the_player == 3){//-Scientist abilitis
		Scientist scientist(board, City::Algiers, 4); 
		if(action == 1) scientist.drive(city);
		if(action == 2) scientist.fly_direct(city);
		if(action == 3) scientist.fly_charter(city);
		if(action == 4) scientist.fly_shuttle(city);
		if(action == 5) scientist.build();
		if(action == 6) scientist.discover_cure(color);
		if(action == 7) scientist.treat(city);
		if(action == 8) scientist.take card(city);
	}
	
	if(role_of_the_player == 4){//-Researcher abilitis
		Researcher researcher(board, City::Algiers);
		if(action == 1) researcher.drive(city);
		if(action == 2) researcher.fly_direct(city);
		if(action == 3) researcher.fly_charter(city);
		if(action == 4) researcher.fly_shuttle(city);
		if(action == 5) researcher.build();
		if(action == 6) researcher.discover_cure(color);
		if(action == 7) researcher.treat(city);
		if(action == 8) researcher.take card(city);
	}

	if(role_of_the_player == 5){//-Medic abilitis
		Medic medic(board, City::Algiers);
		if(action == 1) medic.drive(city);
		if(action == 2) medic.fly_direct(city);
		if(action == 3) medic.fly_charter(city);
		if(action == 4) medic.fly_shuttle(city);
		if(action == 5) medic.build();
		if(action == 6) medic.discover_cure(color);
		if(action == 7) medic.treat(city);
		if(action == 8) medic.take card(city);
	}

	if(role_of_the_player == 6){//-Virologist abilitis
		Virologist virologist(board, City::Algiers);
		if(action == 1) virologist.drive(city);
		if(action == 2) virologist.fly_direct(city);
		if(action == 3) virologist.fly_charter(city);
		if(action == 4) virologist.fly_shuttle(city);
		if(action == 5) virologist.build();
		if(action == 6) virologist.discover_cure(color);
		if(action == 7) virologist.treat(city);
		if(action == 8) virologist.take card(city);
	}
	
	if(role_of_the_player == 7){//-GeneSplicer abilitis
		GeneSplicer geneSplicer(board, City::Algiers);
		if(action == 1) geneSplicer.drive(city);
		if(action == 2) geneSplicer.fly_direct(city);
		if(action == 3) geneSplicer.fly_charter(city);
		if(action == 4) geneSplicer.fly_shuttle(city);
		if(action == 5) geneSplicer.build();
		if(action == 6) geneSplicer.discover_cure(color);
		if(action == 7) geneSplicer.treat(city);
		if(action == 8) geneSplicer.take card(city);
	}

	if(role_of_the_player == 8){//-FieldDoctor abilitis
		FieldDoctor fieldDoctor(board, City::Algiers);
		if(action == 1) fieldDoctor.drive(city);
		if(action == 2) fieldDoctor.fly_direct(city);
		if(action == 3) fieldDoctor.fly_charter(city);
		if(action == 4) fieldDoctor.fly_shuttle(city);
		if(action == 5) fieldDoctor.build();
		if(action == 6) fieldDoctor.discover_cure(color);
		if(action == 7) fieldDoctor.treat(city);
		if(action == 8) fieldDoctor.take card(city);
	}
	
}

if(board.is_clean()) return "Congratulations- You won!!!!!!!!!!!!!!!!!!";

}


void print(Board& b){

cout<< "you'r cards is:" << end;
for(City i: my_cards){ cout<< i +" ," <<end;}

cout<<"The city you are in now is-" + this->city <<endl;

cout<< "The level of the dieases is: " << endl;
for(auto& i: city_string(b.disease)){ cout<< city_string(i.first)<<"=["<<i.second<<"]" <<endl;}
if(b.disease.size() == 0) cout<<"there is no disease"<<endl;


cout<< "You have research station in: " << end;
for(City i: reaserch_stations){ cout<< i +" ," <<end;}
if(b.disease.size() == 0) cout<<"there is no reaserch_stations"<<endl;

cout<< "The cures that you found: " << end;
for(Color i: cures){ cout<< i +" ," <<end;}
if(b.disease.size() == 0) cout<<"there is no cures"<<endl;

}
