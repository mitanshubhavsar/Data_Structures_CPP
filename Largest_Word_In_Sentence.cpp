#include <iostream>
#include <climits>


using namespace std;

int main() {
    int n;
    cin>>n;
    cin.ignore();

    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int current_len = 0;
    int Max_len = INT_MIN;
    int i=0, st=0,maxSt =0;
    while (i<n)
    {
       if(a[i] == ' ' || a[i] == '\0'){
            if(current_len > Max_len){
                maxSt = st;
                Max_len = current_len;
            }
            current_len = 0;
            st = i+1;
       }
       else 
       current_len++;

       
       if(a[i]=='\0'){
           break;
       }
       i++;

    }

    cout<<Max_len<<endl;
    cout<< a <<endl;


    for(int i=0;i<Max_len;i++){
        cout<<a[maxSt+i];
    }
    cout<<endl;
    

    return 0;
}