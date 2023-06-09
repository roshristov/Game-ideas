// #include <iostream> 
// #include "inventory.h"
// #include "items.h"
// #include "dice.h"
// using std::string;
// using std::vector;
// using std::endl;
// using std::cout;

// struct CharacterInventory {
//     std::string name;
//     int price;
//     int weight;
//     std::string Sp_power;
//     int damage;

//     std::string getName();
//     int getPrice();
//     int getWeight();
//     std::string getSp_power();
//     int getDamage();
// };

// struct CharacterWeapon {
//     string name;
//     int damage;

//     std::string getName();
//     int getDamage();
// };

// //for general inventory stats
// std::string CharacterInventory::getName()
// {
//     return name;
// }
// int CharacterInventory::getPrice()
// {
//     return price;
// }
// int CharacterInventory::getWeight()
// {
//     return weight;
// }
// std::string CharacterInventory::getSp_power()
// {
//     return Sp_power;
// }
// int CharacterInventory::getDamage()
// {
//     return damage;
// }

// //for weapon stats
// std::string CharacterWeapon::getName()
// {
//     return name;
// }
// int CharacterWeapon::getDamage()
// {
//     return damage;
// }

// // void Inventory::addItem(Item* item) {
// //     items.push_back(item);
// // }

// // void Inventory::removeItem(Item* item) {
// //     // Find the item in the inventory and remove it
// //     for (auto it = items.begin(); it != items.end(); ++it) {
// //         if (*it == item) {
// //             items.erase(it);
// //             break;
// //         }
// //     }
// // }

// bool Inventory::isInInventory(vector<CharacterInventory> inventory, int itemID) {
//     for (const auto& item : inventory) {
//         if (itemID == 1) {
//             return true;
//         } else if (itemID == 2) {
//             return true;
//         }
//         // Add more conditions for other items as needed
//     }
//     return false;
// }

// void Inventory::displayInventory() {
//     string name;
//     int price;
//     int weight;
//     string Sp_power;
//     int damage;

//     // std::cout << "Inventory:\n";
//     // for (const auto& item : items) {
//     //     std::cout << item->getName() << "\n";
//     // }

//     int itemID;
//     Dice dice;
//     CharacterInventory bedroll;
//     CharacterInventory longsword;
//     switch(itemID) {
//         case 1:
//             bedroll.name = "Bedroll";
//             bedroll.price = 1;
//             bedroll.weight = 7;
//             bedroll.Sp_power = "Helps you sleep in the wild";
//             bedroll.damage = 0;
//             inventory.push_back(bedroll);
//             break;

//         case 2:
//             longsword.name = "Longsword";
//             longsword.price = 15;
//             longsword.weight = 3;
//             longsword.Sp_power = "";
//             longsword.damage = dice.rollDice(8);
//             inventory.push_back(longsword);
//             break;

//             // Javelin:  -   -   -   cost - 5 sp;    weight - 2 lbs;     damage - 1d6;
//             // Longsword:    -   -   cost - 15 gp;   weight - 3 lbs;     damage - 1d8;
//         default:
//             break;
        
//     }

//     if (isInInventory(inventory, itemID)) {
//         displayInventory();
//     } else {
//         std::cout << "Item not found in inventory.\n";
//     }

//     // if (isInInventory) {
//     //     cout << "Name: " << name << endl;
//     //     cout << "Damage: " << damage << endl;
//     // }
// }

