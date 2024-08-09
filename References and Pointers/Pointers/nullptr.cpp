int main()

int someFunction(int* ptr){
    return *ptr;
}
int main()
{
    int* ptr { nullptr }; // can use nullptr to initialize a pointer to be a null pointer

    int value { 5 };
    int* ptr2 { &value }; // ptr2 is a valid pointer
    ptr2 = nullptr; // Can assign nullptr to make the pointer a null pointer

    someFunction(5); // we can also pass nullptr to a function that has a pointer parameter

    return 0;
}