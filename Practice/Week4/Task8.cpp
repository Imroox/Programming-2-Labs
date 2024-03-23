//Write a program in C++ to find the factorial of a number.



#include <iostream>
using namespace std;

int main() {
    int factorial=1, number;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    for (int i=number; i>0; i--){
        factorial*=i;
    }
    cout<<"Factorial value of number that you have entered is: "<<factorial<<endl;

}
