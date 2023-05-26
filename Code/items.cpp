    #pragma once
    #include "items.h"

    //here are the items that will be in the game. 
    //explanation:
    //the money system is with coins.   1 silver(sp) = 10 copper(cp)
    //                                  1 gold(gp) = 10 silver(sp);
    //                                  1 platinum(pp) = 10 gold(gp);

    //the damage is calculated by the amount of dice and the type of dice.
    //example: "1d6" means one 6 sided die. "2d10" means two 10 sided dice.

    //the defence is weirdly complicated, but this is how it works:
    //the character's "Armor Class" is 10 - the character's dexterity modifier. the lower, the better. armor and shields lower it even lower,
    //to the point where it can become negative.
    //in that case, a number between -1 and your AC is randomly picked, and that is used in the formula.
    //when an enemy attacks you, they roll 1d20. then a calculation is done: 10 + your AC. if the die rolls at the number or lower, they hit you.
    //if it is above the number, they miss you.
    //an example:
    //your standart AC is 10 - your dexterity, so in this case, 2. you also have armor with AC at 12. in the end, you end up with -4.
    //with that formula, the number is 6. the enemy rolls 1d20 and gets 8 and they miss. if they got 6 or lower, they would've hit.

    std::string weapon::getName (){
        return name;

    }
    int weapon::getPrice (){
        return price;

    }
    
    int weapon::getWeight(){
        return weight;
    
    }
    
    std::string weapon::getDamage(){
    return damage;

    }

// define weapons and their arguments
weapon::weapon(const std::string& name, int price, int weight, const std::string& damage)
    : name(name), price(price), weight(weight), damage(damage) {}


weapon greataxe("Greataxe", 30, 7, "1d12");
weapon handaxe("Handaxe", 5, 2, "1d6");

//define inventory (the backpack that holds 30 pounds of gear; its arguments)

storage::storage(std::string name, int cost, int weight, const std::string &Sp_power)
 : name(name), price(price), weight(weight), Sp_power(Sp_power) {}

 //define the object
 storage backpack("Backpack", 2, 5, "holds up to 30 pounds of gear");




    //Greataxe: -   -   -   cost - 30 gp;   weight - 7 lbs;     damage - 1d12;  
    //Handaxe:  -   -   -   cost - 5 gp;    weight - 2 lbs;     damage - 1d6;
    //Backpack: -   -   -   cost - 2 gp;    weight - 5 lbs;                         special - can hold 30 pounds of gear;
    //Bedroll:  -   -   -   cost - 1 gp;    weight - 7 lbs;                         special - helps you sleep in the wild;
    //Tinderbox:    -   -   cost - 5 sp;    weight - 1 lb;                          special - can light a torch;
    //Torch:    -   -   -   cost - 1 cp;    weight - 1 lb;      damage - 1 fire;    special - brings bright light in a 20-foot radius;
    //Rations(1 day):   -   cost - 5 sp;    weight - 2 lbs;                         special - makes extended travel possible without sleeping in an inn or a house;
    //Waterskin:    -   -   cost - 2 sp;    weight - 5 lbs;                         special - can hold 4 pints of liquid;
    //Javelin:  -   -   -   cost - 5 sp;    weight - 2 lbs;     damage - 1d6;
    //Mace: -   -   -   -   cost - 5 gp;    weight - 4 lbs;     damage - 1d6;
    //Scale Mail:   -   -   cost - 50 gp;   weight - 45 lbs;    armor class (defence) - 14 + Dex modifier (max 2);
    //Light Crossbow:   -   cost - 25 gp;   weight - 5 lbs;     damage - 1d8;
    //Crossbow Bolt:    -   cost - 1 gp;    weight - 1 1/2 lb;                      special - needed for the crossbow to fire.
    //Shield:   -   -   -   cost - 10 gp;   weight - 6 lbs;     armor class (defence) - 2;
    //Longsword:    -   -   cost - 15 gp;   weight - 3 lbs;     damage - 1d8;
    //Chain Mail:   -   -   cost - 75 gp;   weight - 55 lbs;    armor class (defence) - 16;