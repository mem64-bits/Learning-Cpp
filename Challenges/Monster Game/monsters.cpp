#include <string_view>
#include<iostream>


struct Monster
{

    enum Type
    {
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,
    };

  
    Type type {};
    std::string_view monster_name {};
    int monster_health {};
};


constexpr std::string_view monsterTypeToString(Monster::Type type)
{
    switch (type)
	{
	case Monster::ogre:          return "Ogre";
	case Monster::dragon:        return "Dragon";
	case Monster::orc:           return "Orc";
	case Monster::giant_spider:  return "Giant Spider";
	case Monster::slime:         return "Slime";
	}

	return "Unknown";
}

void printMonster(Monster& m)
{   
    std::cout<<"This "<<monsterTypeToString(m.type)<<" is named "<<m.monster_name<<
    " and has "<<m.monster_health<< " health.\n";
}

int main()
{
    Monster mon_1 {Monster::ogre,"Torg",145};
    Monster mon_2 {Monster::slime,"Blurp",23};
    printMonster(mon_1);
    printMonster(mon_2);
    return 0;

}