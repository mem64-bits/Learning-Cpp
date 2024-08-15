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
};

constexpr std::string_view getAnimalName(Animal animal)
{   
    using enum Animal;
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
    using enum Animal;
    {

        std::cout << "A " << getAnimalName(animal) << " has ";

        switch(animal)
        {
            case pig: 
                std::cout<< 4 ;
                break;

            case chicken: 
                std::cout<<2;
                break;

            case goat: 
                std::cout<< 4;
                break;

            case cat: 
                std::cout<< 4 ;
                break;

            case dog: 
                std::cout<< 4 ;
                break;

            case duck: 
                   std::cout<< 2;
                   break;

            default: 
                std::cout<<"???";
                break;
        }
    }
}
int main(){
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::chicken);
    return 0;
}