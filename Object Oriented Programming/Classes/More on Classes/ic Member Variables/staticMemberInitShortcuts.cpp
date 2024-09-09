/*These are common ways to initilize static members
inside the class inline or constexpr is prefered*/


class Whatever
{
public:
// a static const int can be defined and initialized directly
    static const int s_value { 4 }; 

// a static inline variable can be defined and initialized directly
    static inline int s_ {5};

/*since constexpr variables are implicitly inline they don't 
need the inline keyword to be defined and initilized directly*/
    static constexpr double s_height {1.95};
};