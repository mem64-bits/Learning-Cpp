#include <iostream>



void fizz_buzz(int end_range){
    for (int i{1}; i <= end_range; ++i){

        if((i%3 == 0 ) && (i%5 == 0) && (i%7 == 0)){
            std::cout<<"fizzbuzzpop\n";
        }

        else if(i%3 == 0  && i%5 == 0){
            std::cout<<"fizzbuzz\n";
        }

        else if (i % 3 ==0){
            std::cout<<"fizz\n";
        }

        else if(i % 5 == 0){
            std::cout<<"buzz\n";
        }

        else if (i % 7 == 0){
            std::cout<<"pop\n";
        }


        else {
            std::cout<<i<<'\n';
        }
    }   
}

void fizz_buzz_v2(int end_range){
    for(int i{0}; i <= end_range; ++i){
        bool divisible{false};

        if (i % 3 == 0){
            std::cout<<"fizz\n";
            divisible = true;
        }

        if (i%5 == 0){
            std::cout<<"buzz\n";
            divisible = true;
        }

         if (i%7 == 0){
            std::cout<<"pop\n";
            divisible = true;
        }

        if (!divisible){
            std::cout<<i<<'\n';
        }
            
        }

    }
    
        
int main(){
    fizz_buzz(15);
    std::cout<<'\n';
    fizz_buzz_v2(150);
    return 0;
}