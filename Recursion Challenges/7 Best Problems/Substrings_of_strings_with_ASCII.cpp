#include <iostream>

using namespace std;

void subseq(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code = ch;
    string rest_of_string = s.substr(1);

    subseq(rest_of_string,ans);
    subseq(rest_of_string,ch+ans);
    subseq(rest_of_string,ans+ to_string(code));
}

int main(){
    string s = "AB";
    subseq(s,"");
    return 0;
}