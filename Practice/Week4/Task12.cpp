//Write a program in C++ to find the frequency of each digit in a given integer.

#include <iostream>
using namespace std;

int main(){
    int counter, number, numDig;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    for (int i=0; i < 10; i++){
        cout<<"The frequency of "<<i<<" = ";
        counter=0;

        for (int j=number; j>0; j=j/10){
            numDig=j%10;

            if (numDig==i){
                counter++;
            }

        }
        cout<<counter<<endl;

    }

}