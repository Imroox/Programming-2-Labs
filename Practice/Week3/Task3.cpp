//Consider the following string: txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

//Find the length of this string.
//Print out the first element of the string.
//Print out the last element of the string.


#include <iostream>
using namespace std;

int main() {
    string txt= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout<<"The length of this string is: "<<txt.length()<<endl;
    cout<<"The first letter is: "<<txt[0]<<endl;
    cout<<"The last letter is: "<<txt[txt.length()-1]<<endl;


}