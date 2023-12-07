#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include "../header/Character.h"

using namespace std;

enum WeaponType {HEAVYWEAPON, MEDIUMWEAPON, LIGHTWEAPON};

class Weapon {
    protected:
        WeaponType wType;
        string wName;
        double attackDamage;
        double criticalChance;

    public:
        Weapon(WeaponType type, string name, double attackDamage, double criticalChance);
        WeaponType getType() const;
        virtual string getName() const;
        double getAttackDamage();
        double getCriticalChance();
};
#endif