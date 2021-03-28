#include <iostream>

using namespace std;

int main() {

    int n,factors;
    cin>>n;

    for (int i=2; i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}