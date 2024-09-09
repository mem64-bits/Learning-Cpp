#include <iostream>

/* The friend keyword is used to tell the compiler
that other class or function is now a friend.

This means the friend function has full access to public 
and private and protected members of the class 

A friend function is a function (member or non-member) that can 
access the private and protected members of a class 
as though it were a member of that class*/

class Accumulator
{
private:
    int m_value { 0 };

public:
    void add(int value) { m_value += value; }

    // Here is the friend declaration that makes non-member function void print(const Accumulator& accumulator) a friend of Accumulator
    friend void print(const Accumulator& accumulator);
};

void print(const Accumulator& accumulator)
{
    // Because print() is a friend of Accumulator
    // it can access the private members of Accumulator
    std::cout << accumulator.m_value;
}

int main()
{
    Accumulator acc{};
    acc.add(5); // add 5 to accumulator
    print(acc); // call  the print() non-member function
    return 0;
}