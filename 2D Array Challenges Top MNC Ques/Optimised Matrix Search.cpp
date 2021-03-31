#include <iostream>

using namespace std;

int main() {
    int N1,N2,ele;
    cin>>N1>>N2>>ele;

    int a[N1][N2];

    for(int i=0;i<N1;i++){
        for(int j=0;j<N2;j++){
            cin>>a[i][j];
        }
    }

    bool found = false;
    int r = 0, c = N1-1;
    while(r<N2 && c>=0) {
        if(a[r][c] == ele){
            found = true;
            break;
        }
        else if(a[r][c] > ele){
            c--;
        }
        else{
            r++;
        }
    }

    if(found){
        cout<<"Element Found at"<<r<<" "<<c; 
    }
    else cout<<"Element Not Found"<<endl;

    


    return 0;
}