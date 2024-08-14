#include <iostream>

namespace Monster
{
    enum MonsterType
    {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };    
}


int main(){
    Monster::MonsterType monster{Monster::goblin};
    std::cout<<monster;
    return 0;
}