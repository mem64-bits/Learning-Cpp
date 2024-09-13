#include <iostream>
#include <vector>



template <typename T>
int findMax(std::vector<T>& arr)
{
    T max {};
    for(std::size_t i{0}; i < arr.size(); ++i)
    {   

        max = arr[i]
        
        if(arr[i+1] > max)
        {
            max = arr[i+1];
        }
        
        if(arr[i+1] < max)
        {
            max = max;
        }
    }
    return static_cast<int>(max);
}

int main()
{
    std::vector data1 { 84, 92, 76, 81, 56 };
    std::cout << findMax(data1) << '\n';

    std::vector data2 { -13.0, -26.7, -105.5, -14.8 };
    std::cout << findMax(data2) << '\n';

    std::vector<int> data3 { };
    std::cout << findMax(data3) << '\n';

    return 0;
}