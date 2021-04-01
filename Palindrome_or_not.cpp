#include <iostream>
#include <array>

using namespace std;

int main() {
    int n;
    cin>>n;

    char a[n+1];
    cin>>a;

    bool flag = true;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
            flag = 0;
            cout<<"Not Palindrome"<<endl;
            break;
            
        }
    }

    if(flag) {
        cout<<"Palindrome"<<endl;
    }

    return 0;
}