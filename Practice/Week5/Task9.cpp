//Write a function to check if a word is palindrome or not.

#include <iostream>
using namespace std;

bool check_palindrome(string text){
    for (int i=0; i<text.length()/2; i++){
        if(text[i] != text[text.length()-i-1]){
            return false;
        }

    }
    return true;
}

int main()
{
    cout<<check_palindrome("anavolimilovana");

    return 0;
}