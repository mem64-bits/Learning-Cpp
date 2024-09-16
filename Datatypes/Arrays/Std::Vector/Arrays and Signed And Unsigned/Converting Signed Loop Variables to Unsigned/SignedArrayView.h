#ifndef SIGNED_ARRAY_VIEW_H
#define SIGNED_ARRAY_VIEW_H

#include <cstddef> 

/*While we can’t modify the standard library 
containers to accept a signed integral index,
 we can create our own custom view class to “view” a 
 standard library container class. And in doing so,
  we can define our own interface to work however 
  we want.
  
  works like std::string_view*/


template <typename T>
class SignedArrayView
{
private:
    T &m_array;

public:
    using Index = std::ptrdiff_t;

    SignedArrayView(T& array)
        :m_array{array} {}

    //Overload operator[] to take signed index

    constexpr auto& operator[](Index index) { return m_array[static_cast<typename T::size_type>(index)]; }

    constexpr const auto& operator[](Index index) const { return m_array[static_cast<typename T::size_type>(index)]; }
    
    constexpr auto ssize() const { return static_cast<Index>(m_array.size()); }
};
}
#endif