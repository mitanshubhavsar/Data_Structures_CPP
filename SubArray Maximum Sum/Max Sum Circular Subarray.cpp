#include <iostream> 
#include <climits>

using namespace std;

int kadane(int a[] , int n){
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        sum += a[i];
        if(sum < 0){
            sum = 0;
        }
        maxSum = max(maxSum,sum);
    }

    return maxSum;
}

int main() {

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int wrapSum;
    int nonwrapSum;

    nonwrapSum = kadane(a, n);
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum += a[i];
        a[i] = -a[i];
    }

    wrapSum = totalSum + kadane(a,n);

    cout<< max(wrapSum,nonwrapSum) <<endl;


    return 0;
}