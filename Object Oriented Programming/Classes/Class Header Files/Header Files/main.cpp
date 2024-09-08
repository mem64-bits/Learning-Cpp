#include "Date.h"
int main()
{
    Date date{2024,9,8}; 
    std::cout<<"Year:"<<date.getYear()<<'\n';
    std::cout<<"Month:"<<date.getMonth()<<'\n';
    std::cout<<"Day:"<<date.getDay()<<'\n'<<'\n';
    date.print();
    return 0;
}