//Write a C++ program to find and print the square of each odd
//number from 1 to user specified value.
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter a number: "<<endl;
    cin>>number;

    for (int i=1; i<=number; i++){
        if (i%2!=0){
            cout<<pow(i,2)<<endl;
        }
    }
}
