//Write a function in C++ to ask user to enter password as long as the user doesn’t enter correct password.


#include <iostream>
using namespace std;

void guessPassword(){
    string password;
    while (true){
        cout<<"Enter a password: "<<endl;
        getline(cin,password);
        if (password=="Testpass"){
            break;
        }
    }
}

int main(){
    guessPassword();
    cout<<"Correct password, welcome";
    return 0;
}