#include<iostream>

using namespace std;

int main() {
    int n,fact=1;
    cout<<"Enter a Number\n";
    cin>>n;
    for (int i = 1; i <= n ; i++){
        fact = fact * i;
    }

    cout<<fact<<endl;

    return 0;
}