#include <iostream>
#include "random.h"
#include <string>



class Monster
{
public:
    enum Type
    {
        dragon,
        goblin,
        orge,
        orc,
        skeleton,
        troll,
        vampire,
        zombie,
        maxMonsterTypes
    };

    explicit Monster(Type type, std::string_view name, std::string_view roar, int hitPoints)
    : m_type{type}, m_name{name}
    , m_roar{roar}, m_hitPoints{hitPoints}
    {
    }

    constexpr std::string_view getStrFromType() const
    {
        switch(m_type)
        {
            case Monster::dragon: return "dragon";
            case Monster::goblin: return "goblin";
            case Monster::orge: return "orge";
            case Monster::orc: return "orc";
            case Monster::skeleton: return "skeleton";
            case Monster::troll: return "troll";
            case Monster::vampire: return "vampire";
            case Monster::zombie: return "zombie";
            default: return "???";
        }
    }

    void print() const 
        {   
            if(m_hitPoints > 1)
                std::cout<<m_name<<" the "<<getStrFromType()<<" has "<<m_hitPoints<<" hit points and says "<<m_roar<<'\n';
            else
                std::cout<<m_name<<" the "<<getStrFromType()<<" is dead\n";
        }   

private:    
    Type m_type{};
    std::string m_name{};
    std::string m_roar{};
    int m_hitPoints{};
};

namespace MonsterGenerator
{
    

    std::string_view getName(int name_selector)
    {
        switch(name_selector)
        {
            case 0: return "Thor";
            case 1: return "Gobsmasher";
            case 2: return "The Fury";
            case 3: return "Big Boss";
            case 4: return "Rykor";
            case 5: return "Infernus";
            default: return "???";
        }
    }

        std::string_view getRoar(int roar_selector)
    {
        switch(roar_selector)
        {
            case 0: return "*HYAHHH*";
            case 1: return "*URRAGH*";
            case 2: return "*AHHHH*";
            case 3: return "*SsSsK*";
            case 4: return "*WHOARGGH*";
            case 5: return "*FLSKKK*";
            default: return "???";
        }
    }

    Monster generate()
    {
        return Monster{ Monster::skeleton, getName(Random::get(1,5)), getRoar(Random::get(1,5)), Random::get(1,100)};
    }
}



int main()
{
    Monster m{ MonsterGenerator::generate() };
    m.print();
    return 0;
}