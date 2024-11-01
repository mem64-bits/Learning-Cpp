#include <iostream>
#include <vector>
#include <utility>

template <typename T>
    std::pair<std::size_t, std::size_t> getMinMax(std::vector<T>& v){
        T min{0};
        T max{0};

        for(std::size_t i=0; i<v.size(); i++){
            if(v[i] < v[min])
                min = i;
            
            if(v[i] > v[max])
                max = i;
        }

        return {min,max};
    }

    template <typename T>
    void printVector(const std::vector<T>& v){
        for(int i=0; i<v.size();  v++){
            std::cout<<'('<<i<<", ";
            
            if(i=v.size())
                std::cout<<i<<")\n";
        }

        std::cout<<")\n";
    }

int main(){

    std::vector v1 { 3, 8, 2, 5, 7, 8, 3 };
    std::vector v2 { 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
    std::cout<<"With array ";
    printVector(v1);
    std::cout<<":\nThe min element has index ";
    return 0;
}