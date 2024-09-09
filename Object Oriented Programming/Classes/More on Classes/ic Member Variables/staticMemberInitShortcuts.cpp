/*These are common ways to initilize static members
inside the class inline or constexpr is prefered*/


class Whatever
{
public:
    static const int s_value{ 4 }; // a static const int can be defined and initialized directly
};