#include <iostream>

using namespace std;

string removeDuplicates(string s){
    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans = removeDuplicates(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}

int main(){
    string s ="aaaabbbeeecdddd";
    cout<<removeDuplicates(s)<<endl;
    return 0;
}