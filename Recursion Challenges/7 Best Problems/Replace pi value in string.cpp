#include <iostream>

using namespace std;

void replacePi(string s){
    if(s.length()==0){
        return;
    }

    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        string rest_of_string = s.substr(2);
        replacePi(rest_of_string);
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
    
    


}

int main(){
    string s = "pippppiiiipi";
    replacePi(s);

    return 0;
}