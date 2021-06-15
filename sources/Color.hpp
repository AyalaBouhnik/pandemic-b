#pragma once
#include <string>
using namespace std;


namespace pandemic{

enum Color{

Yellow, Blue, Black, Red

};


inline std::string color_string(Color c){
    switch (c)
    {
    case Color::Yellow: return "YELLOW"; break;
    case Color::Red : return "Red"; break;
    case Color::Black : return "Black"; break;
    case Color::Blue: return "Blue"; break;
    
    default: return "no color!"; break;
    }
}

}
