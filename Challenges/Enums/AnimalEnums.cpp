#include <iostream>
#include <string_view>

enum class Animal
{
    pig, // 0
    chicken,// 1
    goat,// 2
    cat,// 3
    dog,// 4
    duck,// 5
} 

constexpr std::string_view getAnimalName(Animal animal)
{   
    using Animal;
    {
        switch(animal)
        {
            case pig: return "pig";
            case chicken: return "chicken";
            case goat: return "goat";
            case cat: return "cat";
            case dog: return "dog";
            case duck: return "duck";
            default: return "???";
        }
    }
}

void printNumberOfLegs(Animal animal)
{
    using Animal;
    {
        switch(animal)
        {
            case pig: 
                std::cout<<"A pig has 4 legs.\n";
            case chicken: 
                std::cout<<"A chucken has 2 legs.\n";
            case goat: 
                std::cout<<"A goat has 4 legs.\n";
            case cat: 
                std::cout<<"A cat has 4 legs.\n";
            case dog: 
                std::cout<<"A dog has 4 legs.\n";
            case duck: 
                   std::cout<<"A duck has 2 legs.\n";
            
            default: 
                std::cout<<"Undefined enum animal\n";
        }
    }
}
int main(){
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
    return 0;
}