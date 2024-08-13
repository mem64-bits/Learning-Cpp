#include <iostream>
#include <string_view>
#include "random.h"

int main(){
    std::cout<<"Welcome to Rock, Paper, Scissors!\n\n";
  
    std::string_view user_choice{};
    bool end_game{};

    while(!(user_choice == "Rock" || user_choice == "Paper" || user_choice == "Scissors" || end_game ))
    
    std::cout<<"Enter in Rock Paper or Scissors: ";
    std::cin>>user_choice;

    if(user_choice == "rock")
        user_choice = "rock";

    else if(user_choice == "paper")
        user_choice= "paper";

    else if(user_choice == "scissors")
        user_choice= "scissors"

    else
        std::cout<<"Invalid choice please enter in Rock, Paper or Scissors\n";

    return 0;
}
    
    
    
