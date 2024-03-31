//Write a function that will find the factorial of a number.

#include <iostream>
using namespace std;

int find_factorial ( int number){
    int factorial = 1;

    for (int i = number; i>0; i--){
        factorial = factorial * i;
    }
    return factorial;
}

int main (){
    cout<<find_factorial(5);
}