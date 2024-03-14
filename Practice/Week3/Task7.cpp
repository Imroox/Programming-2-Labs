//Consider the following string sentence=”AMOR VINCIT OMNIA.”
//Change the “VINCIT” to “NON VINCAT”.

#include <iostream>
using namespace std;

int main() {
    string sentence = "AMOR VINCIT OMNIA.";

    cout<<"Sentence after replace: "<<sentence.replace(5,6,"NON VINCAT");

}
