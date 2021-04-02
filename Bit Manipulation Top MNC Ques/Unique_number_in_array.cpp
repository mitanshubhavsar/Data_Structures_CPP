#include <iostream>

using namespace std;

int unique(int arr[], int n){
    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}

int main(){
    int n = 7;
    int arr[n] = {1,2,3,4,1,2,3};

    cout<<unique(arr,n)<<endl;
    return 0;
}