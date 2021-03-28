#include <iostream>

using namespace std;

int main() {
    int n,rem,new_number=0;
    cin>>n;

    while (n>0)
    {
        rem = n % 10;
        new_number = new_number*10 + rem;
        n = n / 10;
    }

    cout<<new_number<<endl;
    

    return 0;
}