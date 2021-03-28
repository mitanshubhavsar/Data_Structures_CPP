#include <iostream>

using namespace std;

int main () {
    int t1=0,t2=1,n,temp,fibonacci_sum,i=3;
    cin>>n;

    if(n==1){
        cout<<"0"<<endl;

    }
    else if(n==2) {
        cout<<"1\n"<<endl;
    }
    else {
        while (i<=n)
        {
            fibonacci_sum = t1 + t2;
            t1  = t2;
            t2 = fibonacci_sum;
            i++;
        }

        cout<<fibonacci_sum<<endl;
        
    }

    return 0;
}