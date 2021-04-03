#include <iostream>

using namespace std;

void decreasing_order(int n){
    if(n==0){
        return;
    }

    cout<<n<<endl;
    decreasing_order(n-1);
}

void increasing_order(int n){
    if(n==0){
        return;
    }
    
    increasing_order(n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cin>>n;

    increasing_order(n);
    cout<<endl;
    decreasing_order(n);
    return 0;
}