//Write a function that will turn lowercase letters into uppercase and vice versa in a string.
//Input: hello
//Output: HELLO

#include <iostream>
using namespace std;

string upper_lower ( string text){
    for (int i = 0; i < text.length(); i++){
        if (isupper(text[i])){
            text[i] = tolower(text[i]);
        }else{
            text[i] = toupper(text[i]);
        }
    }
    return text;
}

int main(){
    cout<<upper_lower("Ali imran");
}