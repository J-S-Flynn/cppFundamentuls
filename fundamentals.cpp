#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std; 

void message() ; // declared before main so it can be used 
void ifStatment(int) ; // declared before main with input types 
void specificHello(string) ;
string switchName(int) ; 

//we have two functions , message and getNumber , one is defined befor main, and the other after. 
// both can be called in main. the reason this is the cas eis that getNumber is declared and defined before main. message is declared befor, but dfined after. 
int getNumber(int baseNumber, int multiplyer){

        int sum = baseNumber * multiplyer ; 
        return sum ;
}

int main(){ 

    message() ; // calls a function that prints to the console 
    
    cout << getNumber(5, 2) << endl  ;  // arbritrarily multiplying numbers to show how we can send variables to a function 

    ifStatment(getNumber(5, 2)) ;  //using the output of one function to pass value to another function 
    
    specificHello(switchName(3)) ; 

    return 0 ; 
}

//takes no value simply gets the function to perform an action 
void message(){

    cout << "Hello World!" << endl ; 

}

//takes an int value for evaluation in if statmenr, sows basic iff functionality 
// can use logical opirators like &&, ||, >, <, ==, <=, >=, ! 
void ifStatment(int num){

    if(num < 5){
        cout << "Not a ver bug number that mate!" << endl ; 
    }else if(num > 10){
        cout << "Number is bigger than ten, no need for that!" << endl ; 
    }else{
        cout << "Not 100% sure, you could have just done an evalute to see if it was equal. now I have to guess!" << endl ; 
    }
}

//takes a string and concatinats it to the output 
void specificHello(string name){

    cout << "Thanks " + name + " for all the things you have done" << endl ; 
}

//switch statments in c++ are a little difrent from C, C#, JAVA, GoLang etc. they cannot directly evaluate on strings. it requires a bit of work around to get 
//string evaluations to work. 
string switchName(int num){

    switch (num){
        case 1 : 
            return "Nancy" ;
            break;
        case 2 : 
            return "Ben" ; 
            break;
        case 3 :
            return "TheoXIII" ; 
            break ; 
        default:
            return "No Name Present !" ; 
            break;
    }
}