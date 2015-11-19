#ifndef WEAPON_H
#define WEAPON_H

#include <stdio.h>
#include <string>

using namespace std;

class Weapon
{
public:
    Weapon();
    // name, physicalDamage, physicalType, magicDamage, magicType
    Weapon(string, unsigned int, string, unsigned int, string);
    
    string getName() {return name;};
    unsigned int getPhysicalDamage() {return physicalDamage;};
    string getPhysicalType() {return physicalType;};
    unsigned int getMagicDamage() {return magicDamage;};
    string getMagicType() {return magicType;};
    
    ~Weapon();

private:
    //Superficial
    string name;
    
    //Damage Points
    unsigned int physicalDamage, magicDamage;
    
    //Damage Types
    string physicalType, magicType;
};

#endif // WEAPON_H
