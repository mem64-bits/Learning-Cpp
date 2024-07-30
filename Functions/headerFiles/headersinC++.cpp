#include <iostream>
/*iostream has a header file foward declaring
cout and other functions*/

/*Header files are used to put 
foward declarations in one place to import them 
in later as one file to avoid any problems*/

/*Usually ends in '.h' or 'hpp' or 
sometimes no extension*/ 

int add(int x, int y){
    return x+y;
}

int main(){
    std::cout << add(4,3);
    return 0;
}