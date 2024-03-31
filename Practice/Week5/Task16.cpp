//Write a function that will count how many times does a even number occur in a integer.
//Input: 44556
//Output: 3 even numbers
#include <iostream>
using namespace std;

int count_even (int number){
    int counter = 0;
    int numDig;

    while ( number != 0){
        numDig = number % 10;
        if ( numDig % 2 == 0){
            counter++;
        }
        number = number / 10;
    }
    return counter;
}

int main (){
    cout<< count_even(22558)<<endl;
}
