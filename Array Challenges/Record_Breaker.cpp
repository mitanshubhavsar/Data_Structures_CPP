#include <iostream>

using namespace std;

// void recordBreakers() {
//     int n;
//     cin >> n;
//     int a[n+1];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     a[n] = -1;

//     if(n==1){
//         cout <<"1"<<endl;
//         return;
//     }

//     int ans = 0;
//     int mx = -1;

//     for(int i=0;i<n;i++){
//         if(a[i]>mx && a[i]> a[i+1])
//          ans++;
//         mx = max(mx,a[i]); 
//     }

//     cout<<ans<<endl;
// }

int main () {

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int j = 0;
    int rec_break = 0;

    while (j<n)
    {
        if(j==0){
            if(arr[j+1]< arr[j]){
                rec_break++;
            }
            
        }
        else if(j==n-1){
            if(arr[n-2]< arr[n-1]){
                rec_break++;
            }
            
        }

        else {
            if(arr[j]> arr[j-1] && arr[j]>arr[j+1]){
                rec_break++;
            }
        }
        j++;
    }

    cout<<rec_break<<endl;
    //OR
    // recordBreakers();
    

    return 0;
}