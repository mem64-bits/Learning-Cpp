#include "Date.h"
int main()
{
    Date date{8,9,2024}; 
    std::cout<<date.getYear()<<'\n';
    std::cout<<date.getMonth()<<'\n';
    std::cout<<date.getDay()<<"\n\n";
    date.print();
    return 0;
}