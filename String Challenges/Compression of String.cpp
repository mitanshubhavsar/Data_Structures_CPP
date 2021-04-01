#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s1 = "aaaatrttt";
    int n = s1.size();

    //delete repeating character

    char ans[100];
    ans[0] = s1[0];
    int cnt=1;

    for(int i=1;i<n;i++){
        if(s1[i] != ans[i-1]){
            ans[cnt] = s1[i];
            cnt++;
            
        }
         
    }

    cout<<ans<<endl;

    return 0;
}