//Write a function in C++ to check if a number is prime.

#include <iostream>
using namespace std;
bool check_prime(int number){
   if (number == 0 or number == 1){
       return false;
   }
   for (int i = 2; i<number; i++){
       if (number%i==0){
           return false;
       }
   }
    return true;
}

int main()
{
    int num;
    cout<<"Enter number";
    cin>>num;

    cout<<check_prime(num);
    return 0;
}