//Write a program in C++ to display the multiplication table vertically from 1 to n.


#include <iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter a number: "<<endl;
    cin>>number;

    for (int i=1; i<=10; i++){
        for (int j=1; j<=number; j++){
            cout<<j<< " x "<<i<<" = "<<i*j<<endl;
        }
        cout<<endl;
    }
}
