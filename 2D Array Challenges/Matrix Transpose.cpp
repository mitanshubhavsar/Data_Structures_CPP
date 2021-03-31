#include <iostream>

using namespace std;

int main() {

    int N=3;
    int a[N][N] = {{1,2,3}, {4,5,6}, {7,8,9}};

    
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}