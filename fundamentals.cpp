#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std; 

void message() ; 
//compleatly forgot, code compilation is not like java. the function must be defined befor it can be called
//i.e if you make a function below main and try to call it, main will not lie it.   
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