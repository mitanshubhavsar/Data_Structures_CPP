#include <iostream> 

using namespace std;

int main() {

    int n, org_number, sum=0;
    cout<<"Enter a Number\n";
    cin>>n;
    org_number=n;

    while (n>0)
    {
        int rem = n % 10;
        sum = sum + rem*rem*rem;
        n = n / 10;
    }

    if(org_number == sum){
        cout<<"Amstrong Number"<<endl;
    }
    else {
        cout<<"Not Amstrong Number"<<endl;
    }
    
    
    return 0;
}