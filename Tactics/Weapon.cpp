#include "Weapon.h"

Weapon::Weapon()
{
}

Weapon::Weapon(string name, unsigned int physicalDamage, string physicalType, unsigned int magicDamage, string magicType){
    this->name = name;
    this->physicalDamage = physicalDamage;
    this->physicalType = physicalType;
    this->magicDamage = magicDamage;
    this->magicType = magicType;
}

Weapon::~Weapon()
{
}

