#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    int max_number = INT_MIN;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        max_number = max(max_number,arr[i]);
    }

    cout<<max_number<<endl;

    return 0;
}