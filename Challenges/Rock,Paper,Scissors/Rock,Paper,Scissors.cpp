#include <iostream>
#include <string_view>
#include "random.h"

int main(){
    std::cout<<"Welcome to Rock, Paper, Scissors!\n\n";
  
    std::string& user_choice{};

    while(!(user_choice == "Rock" || user_choice == "Paper" || user_choice == "Scissors" ))
    
    std::cout<<"Enter in Rock Paper or Scissors: ";
    std::cin>>user_choice;

    switch(user_choice)
    {   case "Rock":
            user_choice= "Rock";
            break;

        case "Paper":
            user_choice= "Paper":
            break;

        case "Scissors":
            user_choice= "Scissors";
            break;

        default:
            std::cout<<"Invalid choice,Please choose either 'Rock', 'Paper', or 'Scissors";
    }

    return 0;
}
    
    
    
