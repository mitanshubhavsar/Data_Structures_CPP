#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int Max_number = INT_MIN;
    int Min_number = INT_MAX;

    for(int i=0;i<n;i++){
        Max_number = max(Max_number,arr[i]);
        Min_number = min(Min_number,arr[i]);
    }

    cout <<Max_number<<endl;
    cout<<Min_number<<endl;

    return 0;
}