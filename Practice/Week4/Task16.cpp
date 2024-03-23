//Write a C++ program to check whether a given number is a power of two or not.

#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    for ( int i=0; i<number; i++){
        if (pow(2,i)==number){
            cout<<"The number is a power of two."<<endl;
            break;
        }
        else if (pow(2,i)>number){
            cout<<"The number is not a power of two."<<endl;
            break;
        }
    }
}