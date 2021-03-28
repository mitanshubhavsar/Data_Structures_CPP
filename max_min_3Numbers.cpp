#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int max ( int a, int b, int c) {
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else {
        if(b>c){
            return b;
        }
        else {
            return c;
        }
    }
    
}

int min (int a, int b, int c) {
    if(a<b){
        if(a<c){
            return a;
        }
        else {
            return c;
        }
    }
    else {
        if(b<c){
            return b;
        }
        else{
            return c;
        }
    }
}

int main() {

    int a,b,c;
    int max_Number = INT_MIN;
    int min_Number = INT_MAX;
    cin>>a>>b>>c;

    max_Number = max(a,b,c);
    min_Number = min(a,b,c);

    cout<<max_Number<<endl;
    cout<<min_Number<<endl;

    return 0;
}