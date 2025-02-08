#include <iostream>
#include <vector>
#include <string>
#include <cassert>

enum ItemType{
    health_potion,
    torches,
    arrows,
    max_items
};

int main(){
    std::vector player_items {1,5,10};
    assert(player_items.size() == ItemType::max_items && "Player Items Error: Not properly initilized" );

    int total_items{};
    for(auto items : player_items)
        total_items += items;

    std::cout<<"You have "<<player_items[health_potion]<<" health potion\n";
    std::cout<<"You have "<<player_items[torches]<<" torches\n";
    std::cout<<"You have "<<player_items[arrows]<<" arrows\n";
    std::cout<<"You have "<<total_items<<" total items\n";

}