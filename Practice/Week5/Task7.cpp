//Write a C++ function to find sum of all digits between two numbers.


#include <iostream>
using namespace std;

int sum_digits(int num1, int num2){
    int sum=0;
    for (int i=num1; i<num2; i++){
        int p=i;
        while(p>0){
            sum=sum+p%10;
            p=p/10;
        }
    }
    return sum;
}

int main() {
    //int n1 = 5;
    //int n2 = 9;
    //int n1 = 12;
    //int n2 = 18;
    int n1 = 39;
    int n2 = 41;
    cout << "Add up all the digits between " << n1 << " and " << n2 << " is: ";
    cout << sum_digits(n1, n2) << endl;
}
