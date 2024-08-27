#include <iostream>
#include <string>

struct Person
{
    std::string name{};
    int age {};

    void kisses(Person& person)
    {
        // Acesses name from inside the struct
        // person.name acesses name member from outside the struct
        std::cout<<name<<" kisses "<<person.name<<'\n';
    }

};

int main()
{
    Person joe{"Joe",29};
    Person kate{"Kate",27};

    joe.kisses(kate);
    return 0;
}