
/*in the previous section we used Pair<T>& pair as
a parameter for the template member function, because
the name of a constructor must match the name of the class.

But we can write a shorthand version of this called an injected 
class because using Pair<T> as the return type of the function,
makes the compiler treat Pair as if we had written Pair<T> instead.*/

template <typename T>
class Pair
{
private:
    T m_first{};
    T m_second{};

    bool isEqual(const Pair& pair);
};

template <typename T>
bool Pair<T>::isEqual(const Pair& pair) // note the parameter has type Pair, not Pair<T>
{
    return m_first == pair.m_first && m_second == pair.m_second;
}