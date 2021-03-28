#include <iostream>

using namespace std;

int main () {

    char c;
    cin>>c;

    if(isalpha(c)){
        if (c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'u'||c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U'){
        cout<<"Character is Vowel\n";
        }
        else{
            cout <<"Character is Consonant\n";
        }
    }
    else{
        cout<<"Invalid Character\n";
    }

    
    
    return 0;
}