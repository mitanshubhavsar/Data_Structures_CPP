#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int sum;
    int Max_Sum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum = 0;
            for(int k=i;k<=j;k++){
                sum += a[k];
            }
            Max_Sum = max(Max_Sum,sum);
        }
        
    }

   
    
    cout<<Max_Sum;

    return 0;
}