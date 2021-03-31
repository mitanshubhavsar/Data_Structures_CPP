#include <iostream>

using namespace std;

int main() {
    int N1,N2,ele,flag=0;
    cin>>N1>>N2>>ele;

    int a[N1][N2];

    for(int i=0;i<N1;i++){
        for(int j=0;j<N2;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<N1;i++){
        for(int j=0;j<N2;j++){
            if(a[i][j]==ele){
                flag=1;
                cout<<"Element Found"<<endl;
                cout<<i<<" "<<j<<endl;
            }
        }
    }

    if(flag==0){
        cout<<"Element Not Found"<<endl;
    }

    return 0;
}