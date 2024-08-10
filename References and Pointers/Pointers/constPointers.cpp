int main()
{
    const int x{ 5 };

/*When you want to point to a const 
you need to put a const in front of the pointer*/ 

    const int* ptr { &x }; // okay: ptr is pointing to a "const int"
    
    #if 0
    *ptr = 6; // not allowed: we can't change a const value
    #endif

    return 0;
}