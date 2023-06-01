#pragma once
#include <string>

class Item {
public:
    std::string getName();
private:
    std::string name;
};

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
    storage(const std::string name, int cost, int weight, const std::string &Sp_power);
    std::string getName() const;
    int getCost();
    int getWeight() const;
    std::string getSp_power() const;
};

class armor
{
private:
    std::string name;
    int price;
    int weight;
    int defence;

public:
armor(std::string name, int price, int weight, int defence);
std::string getName();
int getPrice();
int getWeight();
int getDefence();


};

class Bed{
private:
    std::string name;
    int price;
    int weight;
    std::string special;


public:
    Bed(std::string name, int price, int weight, const std::string special);
    std::string getName();
    int getPrice();
    int getWeight();
    std::string getspecial();

};

class Crossbow{

private:
    std::string name;
    int price;
    int weight;
    std::string special;
    std::string damage;

public:
    Crossbow(std::string name, int price, int weight, std::string damage, std::string special);
    std::string getName();
    int getPrice();
    int getWeight();
    std::string getspecial();
    std::string getDamage();

};


class Javelin{

private:
    std::string name;
    int price;
    int weight;
    std::string damage;
public:
    Javelin(std::string name, int price, int weight, std::string damage);
    std::string getName();
    int getPrice();
    int getWeight();
    std::string getDamage(); 
};

class Mace{
private:
    std::string name;
    int price;
    int weight;
  
public:
    Mace(std::string name, int price, int weight);
    std::string getName();
    int getPrice();
    int getWeight();
    
};

