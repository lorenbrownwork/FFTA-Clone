#include <stdio.h>
#include <string>
#include <iostream>

#include "Character.h"
#include "Weapon.h"
#include "Armor.h"

using namespace std;

int main(int argc, char **argv)
{
    Armor WoodenSheild ("Wooden Sheild", 10, "Normal", 10, "Normal");
    Weapon RustySword ("Rusty Sword", 30, "Normal", 0, "Normal");
	Character Joe ("Joe", 100, 20, 2.0, 2.0, 1.0, RustySword, WoodenSheild);
    Character Bob ("Bob", 100, 20, 1.0, 2.0, 1.0, RustySword, WoodenSheild);
    cout << Joe.getHP() << endl;
    Joe.hurt(Bob);
    cout << Joe.getHP() << endl;
    
}
