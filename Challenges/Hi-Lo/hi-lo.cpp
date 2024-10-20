#include <iostream>
#include "Random.h"

void hiLo(int min_guesses, int max_guesses)
{
    int rand_num{Random::get(1,100)};
    std::cout<<"Let's play a game. ";
    std::cout<<"I'm thinking of a number between 1 and 100. ";
    std::cout<<"You have 7 tries to guess what it is.\n";
    
    int guess{};
    int guess_count{1};
    
    while(!(guess_count >= max_guesses))
    {
        std::cout<<"\nGuess #"<<guess_count<<": ";
        std::cin>>guess;
        std::cout<<'\n';

        if(guess == 0 || guess_count > 0){
            std::cout<<"You need to input all least "<<min_guesses<<"guess/guesses";
        }

        else if(guess>rand_num)
        {
            std::cout<<"Your guess was too high.\n";
            ++guess_count;
        }

        else if(guess<rand_num)
        {
            std::cout<<"Your guess was too low.\n";
            ++guess_count;
        }

        else if(guess==rand_num)
        {
            std::cout<<"Correct! you win!\n";
            break;
        }

        if(guess_count == max_guesses)
        {
            std::cout<<"Sorry you lose. The correct number was "<<rand_num<<'\n';
             char play_options{};

            while(!(play_options == 'y'|| play_options == 'n'))
            {
                std::cout<<"Would you like to play again (y/n)? ";
                std::cin>>play_options;
                std::cout<<'\n';

                if(play_options == 'n')
                {
                    std::cout<<"Thank you for playing";
                    return;
                }

                else if(play_options == 'y')
                {
                    guess_count = 0;
                    rand_num = Random::get(1,100);
                    continue;
                }
        } 
                
            
    }
}

}





int main(){
   hiLo(1,7);
    return 0;
}