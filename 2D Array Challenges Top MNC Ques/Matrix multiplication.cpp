#include <iostream> 

using namespace std;

int main() {
    int N1,N2,N3;
    cin>>N1>>N2>>N3;

    int a[N1][N2];
    int b[N2][N3];
    int ans[N1][N3];

    for(int i=0;i<N1;i++){
        for(int j=0;j<N2;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<N2;i++){
        for(int j=0;j<N3;j++){
            cin>>b[i][j];
        }
    }

    for(int i=0;i<N1;i++){
        for(int j=0;j<N3;j++){
            ans[i][j] = 0;
        }
    }

    for(int i=0;i<N1;i++){
        for(int j=0;j<N3;j++){
            for(int k=0;k<N2;k++){
                ans[i][j] += a[i][k] * b[k][j];
            }
            
        }
    }

    for(int i=0;i<N1;i++){
        for(int j=0;j<N3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}