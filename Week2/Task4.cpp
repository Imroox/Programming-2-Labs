//Write a C++ program that asks the user to enter a username and password and check if the credentials are valid.
//Valid username is “testuser” and password is “Test124”.

#include <iostream>
using namespace std;

int main() {
    string username, password;
    cout<<"Enter username: "<<endl;
    cin>>username;
    cout<<"Enter password: "<<endl;
    cin>>password;

    if (username=="testuser" and password == "Test124"){
        cout<<"Valid Credentials."<<endl;
    }
    else{
        cout<<"Not valid credentials."<<endl;
    }
}
