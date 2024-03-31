//Write a function that will remove zeros from a number. In case the number does not contain zeros, just return it as the output.
//Example:
//Input: 3050000
//Output: 35

#include <iostream>
using namespace std;

int remove_zeroes(int number){
    int reverse_num1=0, reverse_num2=0, numDig1, numDig2;
    while(number!=0){
        numDig1=number%10;
        if (numDig1 != 0){
            reverse_num1 = reverse_num1 * 10 + numDig1;
        }
        number/=10;
    }

    while(reverse_num1 != 0){
        numDig2 = reverse_num1 % 10;
        reverse_num2 = reverse_num2 * 10 + numDig2;
        reverse_num1 /= 10;
    }

    return reverse_num2;
}

int main (){
    cout<<remove_zeroes(20567)<<endl;
}

