#include <iostream>
#include <random>
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

    Monster(Type type, std::string_view name, std::string_view roar, int hitPoints)
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
    Monster generate()
    {
        
    }
}



int main()
{
    Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
	skeleton.print();

	Monster vampire{ Monster::vampire, "Nibblez", "*hiss*", 0 };
	vampire.print();

    return 0;
}