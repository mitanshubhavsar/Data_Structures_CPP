#include <iostream>

using namespace std;

void subseq(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string rest_of_string = s.substr(1);

    subseq(rest_of_string,ans);
    subseq(rest_of_string,ch+ans);
}

int main(){
    string s = "ABC";
    subseq(s,"");
    return 0;
}