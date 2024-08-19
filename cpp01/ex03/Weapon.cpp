#include "Weapon.hpp"

Weapon::Weapon(): type("With His Hands...."){}

Weapon::Weapon(const std::string& type): type(type) {}

const std::string& Weapon::getType()
{
    const std::string& typeREF = type;
    return typeREF;
}

// We Can Also Do: 
/* 
    const std::string& Weapon::getType(){ return type; }
*/


void Weapon::setType(const std::string& type){ this->type = type; }