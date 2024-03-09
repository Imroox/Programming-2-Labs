//Make the user enter create a song. The song will be written by entering multiple strings.
//At the end, the strings will be concatenated and the song will be displayed to the user.

#include <iostream>
using namespace std;

int main() {

    string song="",s;

    cout<<"Enter the lines of your song. Type 'exit' to finish."<<endl;

    while(s!="exit"){
        song+=s;
        cin>>s;
    }
    cout<<song<<endl;
}
