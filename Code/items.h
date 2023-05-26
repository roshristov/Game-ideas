#pragma once
#include <string>
class weapon
{
private:
    std::string name;
    int price;
    int weight;
    std::string damage;

public:
    weapon(const std::string &name, int price, int weight, const std::string &damage);
    std::string getName();
    int getPrice();
    int getWeight();
    std::string getDamage();
};

class storage
{
private:
    std::string name;
    int price;
    int weight;
    std::string Sp_power;

public:
    storage(std::string name, int cost, int weight, const std::string &Sp_power);
    std::string getName() const;
    int getCost() const;
    int getWeight() const;
    std::string getSp_power() const;
};
