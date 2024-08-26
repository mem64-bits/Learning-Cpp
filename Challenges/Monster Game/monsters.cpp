#include <string_view>
#include<iostream>

enum MonsterType
{
    Orge,
    Dragon,
    Orc,
    Giant_Spider,
    Slime,
};


struct Monster
{
    MonsterType monster_type {};
    std::string_view monster_name {};
    int monster_health {};
};

void printMonster(Monster m)
{   
    std::string_view monster_type {};
    
    using enum MonsterType;
    {
        switch(m.monster_type)
        {
            case Orge: monster_type = "Orge"; 
                break;

            case Dragon: monster_type = "Dragon"; 
                break;

            case Orc: monster_type = "Orc";
                break;

            case Giant_Spider: monster_type = "Giant Spider";
                break;

            case Slime : monster_type = "Slime";
                break;

            default : monster_type = "???";
                break;

        } 
    }
    
    std::cout<<"This "<<monster_type<<" is named "<<m.monster_name<<
    " and has "<<m.monster_health<< " health.\n";
}

int main()
{
    Monster mon_1 {MonsterType::Orge,"Torg",145};
    Monster mon_2 {MonsterType::Slime,"Blurp",23};
    printMonster(mon_1);
    printMonster(mon_2);
    return 0;

}