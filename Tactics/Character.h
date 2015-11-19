#ifndef CHARACTER_H
#define CHARACTER_H

#include <stdio.h>
#include <iostream>
#include <string>

#include "Weapon.h"
#include "Armor.h"

using namespace std;

class Character
{
public:
    //Constructor
    Character(); //Default
    // name, maxHP, maxMP, toughnes, strength, manaGen, weapon, armor
    Character(string, unsigned int, unsigned int, float, float, float, Weapon&, Armor&); 
    
    //Accessors
    unsigned int getMP() {return MP;};
    unsigned int getHP() {return HP;};
    unsigned int getStrength() {return strength;};
    Weapon getWeapon() {return weapon;};
    void hurt(Character&);
    void heal(unsigned int);  //point heal
    void heal(float); //percentage heal
    
    //Destructor
    ~Character(); //Default
    
private:
    //Stats
    string name;
    unsigned int maxHP, maxMP; //Base
    unsigned int HP, MP; //Status
    float strength, toughnes, manaGen; //Multipliers
    
    //Equipment
    Weapon weapon;
    Armor armor;
};

#endif // CHARACTER_H
