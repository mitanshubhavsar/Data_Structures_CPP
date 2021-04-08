#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

string reversePostfix(string s){
    string res;
    for(int i=s.length()-1;i>=0;i--){
        res+=s[i];
    }
    return res;
}

string infixToPrefix(string s){

    reverse(s.begin(),s.end());

    stack<char> st;
    string res;

    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while (!st.empty() && st.top()!=')')
            {
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();           //pop ')' bracket
            }
            
        }
        else{
            while (!st.empty() && prec(st.top())>=prec(s[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
            
        }
    }

    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    reverse(res.begin(),res.end());
    return res;
}

int main(){

    string s="(a-b/c)*(a/k-l)";
    cout<<infixToPrefix(s)<<endl;
    return 0;
}