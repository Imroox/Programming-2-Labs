//Write a C++ program that reads two integers and checks if they are multiplied or not.
//Test Data :
//Input the first number: 5
//Input the second number: 15
//Expected Output: Multiplied!

#include <iostream>
using namespace std;

int main() {
    int number1,number2;
    cout<<"Enter two numbers: "<<endl;
    cin>>number1>>number2;
    if (number1%number2==0 or number2%number1==0){
        cout<<"Multiplied."<<endl;
    }
    else{
        cout<<"Not multiplied."<<endl;
    }

}


