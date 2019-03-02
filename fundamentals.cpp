#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std; 

void message() ; 

//we have two functions , message and getNumber , one is defined befor main, and the other after. 
// both can be called in main. the reason this is the cas eis that getNumber is declared and defined before main. message is declared befor, but dfined after. 
int getNumber(int baseNumber, int multiplyer){

        int sum = baseNumber * multiplyer ; 
        return sum ;
}

int main(){ 

    cout << getNumber(5, 5) << endl  ; 

    message() ; 
    return 0 ; 
}


void message(){

    cout << "Hello World!" << endl ; 

}