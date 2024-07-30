#include <iostream> // for std::cout and std::endl

int main(){
// std::endl will cause the cursor 
// to move to the next line of the console
// similar to /n

    std::cout << "Hi!" << std::endl; 
    std::cout << "My name is Tory." << std::endl;

// Without endl
    std::cout << "\n";
    std::cout << "Hi!"; 
    std::cout << "My name is Tory.";
    return 0;

/* endl is not as good as using '\n' because
   endl = \n + flushing buffer 


    buffer = output that is sent to 
    a region of memory set aside to collect such requests
    
    flushing a buffer means  all of the data collected in the buffer is transferred to its destination 
    (e.g the console).
*/
}