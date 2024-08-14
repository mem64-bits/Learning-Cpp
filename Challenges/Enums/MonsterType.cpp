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
    return 0;
}