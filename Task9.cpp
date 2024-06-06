#include <iostream>
#include <string>


using namespace std;


enum class MonsterType {
    Ogre,
    Dragon,
    Orc,
    GiantSpider,
    Slime
};


struct Monster {
    MonsterType type;
    string name;
    int health;
};


string getMonsterTypeString(MonsterType type) {
    switch (type) {
    case MonsterType::Ogre: return "Ogre";
    case MonsterType::Dragon: return "Dragon";
    case MonsterType::Orc: return "Orc";
    case MonsterType::GiantSpider: return "Giant Spider";
    case MonsterType::Slime: return "Slime";
    default: return "Unknown";
    }
}

void printMonster(const Monster& monster) {
    cout << "This " << getMonsterTypeString(monster.type)
        << " is named " << monster.name
        << " and has " << monster.health << " health." << endl;
}

int main() {

    Monster ogre{ MonsterType::Ogre, "Torg", 145 };
    Monster slime{ MonsterType::Slime, "Blurp", 23 };


    printMonster(ogre);
    printMonster(slime);

}
