#include "Armor.h"

Armor::Armor()
{
}

Armor::Armor(string name, unsigned int physicalResist, string physicalType, unsigned int magicResist, string magicType)
{
    this->name = name;
    this->physicalResist = physicalResist;
    this->physicalType = physicalType;
    this->magicResist = magicResist;
    this->magicType = magicType;
}

Armor::~Armor()
{
}

