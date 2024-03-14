//Write a C++ program to ask 2 users to enter the name, surname and year of birth.
//The program will then print out Welcome message for each.
//Also, the program will calculate how old both people are.
//Finally, the program will print out who is older.

#include <iostream>
using namespace std;

int main() {
   string name1,name2,surname1,surname2;
   int yearOfBirth1,yearOfBirth2;

   cout<<"Enter name, surname and year of birth for user 1: "<<endl;
   cin>>name1>>surname1>>yearOfBirth1;

   cout<<"Enter name, surname and year of birth for user 2: "<<endl;
   cin>>name2>>surname2>>yearOfBirth2;

   cout<<"Welcome " + name1 + " " + surname1<<endl;
   cout<<"Welcome "+ name2 + " " + surname2<<endl;

    if (2024-yearOfBirth1 > 2024-yearOfBirth2){
        cout<<"The user 1 is older than user 2."<<endl;
    }
    else if (2024-yearOfBirth1 < 2024 -yearOfBirth2){
        cout<<"The user 2 is older than user 1."<<endl;
    }
    else{
        cout<<"The user 1 and user 2 are of the same age."<<endl;
    }
}