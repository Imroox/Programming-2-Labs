//Write a function to swap the values of 2 numbers (using call by reference).

#include <iostream>
using namespace std;
void swap_numbers(int &a, int &b){

    int temp=a;
    a=b;
    b=temp;

}

int main (){
    int a = 6;
    int b = 8;

    swap_numbers(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
}