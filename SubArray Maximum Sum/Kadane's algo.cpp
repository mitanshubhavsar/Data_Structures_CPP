#include <iostream>
#include <climits>

using namespace std;

int main () {

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum < 0){
            sum = 0;
        }
        maxSum = max(maxSum,sum);
    }

    cout<< maxSum <<endl;

    return 0;
}