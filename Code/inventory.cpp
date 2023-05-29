#include "inventory.h"
#include "items.h"

void Inventory::addItem(Item* item) {
    items.push_back(item);
}

void Inventory::removeItem(Item* item) {
    // Find the item in the inventory and remove it
    for (auto it = items.begin(); it != items.end(); ++it) {
        if (*it == item) {
            items.erase(it);
            break;
        }
    }
}

void Inventory::displayInventory() {
    std::cout << "Inventory:\n";
    for (const auto& item : items) {
        std::cout << item->getName() << "\n";
    }
}
