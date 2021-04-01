#include <iostream>

using namespace std;

int main() {
    int a=10;
    int *aptr = &a;

    cout<<*aptr<<endl;
    *aptr = 20;
    int **q = &aptr; //pointer of pointer
    cout<<a<<endl;
    cout<<**q<<endl;


    int arr[] = {50,20,30};
    cout<<*arr<<endl;

    int *ptr = arr;

    for(int i=0;i<3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }

    for(int i=0;i<3;i++){
        cout<<*(arr + i)<<" ";
        //arr++; //illegal
    }

    return 0;
}