//Write a C++ program to reverse a number.

#include <iostream>
using namespace std;

int main(){
    int number, reversedNumber=0, NumDig;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    while(number!=0){
        NumDig=number%10;
        reversedNumber=reversedNumber*10+NumDig;
        number=number/10;
    }
    cout<<"Reversed number is: "<<reversedNumber<<endl;
}
