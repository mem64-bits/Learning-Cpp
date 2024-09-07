#include <iostream>

struct Something
{
    int data{};

    void setData(int data)
    {
        this->data = data;
        // this data refers to the member data
        // while data is the local function parameter
    }
};