#ifndef ARMOR_H
#define ARMOR_H

#include <stdio.h>
#include <string>

using namespace std;

class Armor
{
public:
    Armor();
    // name, physicalResist, physicalType, magicResist, magicType
    Armor(string, unsigned int, string, unsigned int, string);
    ~Armor();
    
    string getName() {return name;};
    unsigned int getPhysicalResist() {return physicalResist;};
    string getPhysicalType() {return physicalType;};
    unsigned int getMagicResist() {return magicResist;};
    string getMagicType() {return magicType;};
    
private:
    //Superficial
    string name;
    
    //Damage Points
    unsigned int physicalResist, magicResist;
    
    //Damage Types
    string physicalType, magicType;
};

#endif // ARMOR_H
