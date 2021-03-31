#include <bits/stdc++.h>

using namespace std;

bool Linear_Pair_Target_Sum(int a[], int n, int s){
    int low=0,high=n-1;

    while(low<high){

        if(a[low] + a[high]==s){
            cout<<low+1<<" "<<high+1<<endl;
            return true;
        }
        else if(a[low] + a[high]<s){
            low++;
        }
        else{
            high--;
        }

        
    }
    return false;
}

int main() {

    int n,s,flag=0;
    cin>>n>>s;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    cout<<Linear_Pair_Target_Sum(a,n,s)<<endl;
    

    return 0;
}