/*Variables of a struct type can be const 
(or constexpr), and just like all const 
variables, they must be initialized.*/

struct Rectangle
{
    double length {};
    double width {};
};

// Overload function to allow struct to be printed.
std::ostream& operator<<(std::ostream& out, const Employee& e )
{
    out<< "id: "<< e.id<<" age: " <<e.age<< " wage: " <<e.wage;
    return out;
}

int main()
{
    const Rectangle unit { 1.0, 1.0 };
    const Rectangle zero { }; // value-initialize all members
    return 0;
}