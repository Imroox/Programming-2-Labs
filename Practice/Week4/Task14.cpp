//Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).

#include <iostream>
using namespace std;

int main() {
    int number, sum=0;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    for (int i=1; i<=number; i++){
        sum=sum+i*i;
    }
    cout<<"The sum of this series is: "<<sum<<endl;

}