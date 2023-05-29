#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "items.h"

class Inventory {
public:
    void addItem(Item* item);
    void removeItem(Item* item);
    void displayInventory();

private:
    std::vector<Item*> items;
};

#endif  // INVENTORY_H
