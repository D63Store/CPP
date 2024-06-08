#include <iostream>
#include <array>

using namespace std;


enum class ItemType {
    HealthPotion,
    Torch,
    Arrow,
    ItemTypeCount 
};


string getItemTypeString(ItemType type) {
    switch (type) {
    case ItemType::HealthPotion: return "Health Potion";
    case ItemType::Torch: return "Torch";
    case ItemType::Arrow: return "Arrow";
    default: return "Unknown";
    }
}

int countTotalItems(const array<int, static_cast<size_t>(ItemType::ItemTypeCount)>& items) {
    int total = 0;
    for (int item : items) {
        total += item;
    }
    return total;
}

int main() {

    array<int, static_cast<size_t>(ItemType::ItemTypeCount)> items = { 2, 5, 10 };

    cout << "Total items: " << countTotalItems(items) << endl;

    cout << "Number of torches: " << items[static_cast<size_t>(ItemType::Torch)] << endl;

    return 0;
}
