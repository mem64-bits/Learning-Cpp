#include <string_view>
#include<iostream>


enum class MonsterType
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
    std::string monster_type {};
    
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
    
    std::cout<<"This "<<&monster_type<<" is named "<<m.monster_name<<
    "and has "<<m.monster_health<< "health.\n";
}

int main()
{
    Monster pokemon{MonsterType::Dragon,"Dragonite",150};
    printMonster(pokemon);
    return 0;

}