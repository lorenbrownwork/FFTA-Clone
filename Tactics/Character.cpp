#include "Character.h"

Character::Character()
{
}

Character::Character(string name, unsigned int maxHP, unsigned int maxMP, float toughnes, float strength, float manaGen, Weapon& weapon, Armor& armor)
{
    this->name = name;
    this->maxHP = maxHP;
    this->maxMP = maxMP;
    this->toughnes = toughnes;
    this->strength = strength;
    this->manaGen = manaGen;
    this->weapon = weapon;
    this->armor = armor;
    this->HP = maxHP;
    this->MP = maxMP;
}

void Character::hurt(Character& character)
{
    unsigned int physDamage = character.getWeapon().getPhysicalDamage() * character.getStrength();
    unsigned int magDamage = character.getWeapon().getMagicDamage() * character.getStrength();
    unsigned int physResist = this->armor.getPhysicalResist() * this->toughnes;
    unsigned int magResist = this->armor.getMagicResist() * this->toughnes;
    
    string magicDefType = this->armor.getMagicType();
    string magicAtcType = character.getWeapon().getMagicType();
    
    string physDefType =this->armor.getPhysicalType();
    string physAtcType = character.getWeapon().getPhysicalType();
    
    //Modify Damage
    if (magicDefType.compare(magicAtcType)){ //Matching
        magDamage = magDamage * .5;
    }else if (magicDefType.compare("Ice")){
        if (magicAtcType.compare("Electric"))
            magDamage = magDamage * 1.5;
    }else if (magicDefType.compare("Fire")){
        if (magicAtcType.compare("Ice"))
            magDamage = magDamage * 1.5;
    }else if (magicDefType.compare("Electric")){
        if (magicAtcType.compare("Fire"))
            magDamage = magDamage * 1.5;
    }
    
    int actDamage = (physDamage - physResist) + (magDamage - magResist);
    
    cout << actDamage << endl;
    
    //prevent Negative Health
    if (actDamage > 0) {
        if (this->HP > actDamage) {
            this->HP -= actDamage;
        } else {
            this->HP = 0;
        }
    }
}

void Character::heal(unsigned int value)
{
    this->HP += value;
    if (this->HP > this->maxHP){
        this->HP = this->maxHP;
    }
}

void Character::heal(float percent)
{
    this->HP += percent * this->maxHP;
    if (this->HP > this->maxHP){
        this->HP = this->maxHP;
    }
}

Character::~Character()
{
}

