#include <iostream> 

using namespace std;

int Pair_Target_Sum(int a[], int n, int s){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j] == s){
                cout<<i+1<<" "<<j+1<<endl;
                return true;
            }
        }
    }
    return false;
}

int main () {

    bool ans;
    int n,s;
    cin>>n>>s;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<Pair_Target_Sum(a,n,s);
    

    return 0;
}