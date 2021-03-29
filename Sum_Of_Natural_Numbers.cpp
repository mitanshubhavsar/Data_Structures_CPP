#include <iostream>

using namespace std;

int sumLoop (int n) {
    int ans = 0;
        for(int i=1;i<=n;i++){
            ans += i; 
        }
        return ans;
    }

int sumFormula (int n) {
    int ans= 0;
    ans = (n*(n+1))/2;
    return ans;
}    

int main() {
    int n,result1,result2;
    cin>>n;

    result1 = sumLoop(n);
    result2 = sumFormula(n);

    cout<<result1<<"\n";
    cout<<result2<<"\n";


    return 0;
}

