#include <iostream>

using namespace std;

int main () {

    string s = "dscfsdvsdvyujysss";

    int freq[26];

    for(int i=0;i<26;i++){
        freq[i] = 0;
    }

    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    char ans ='a';
    int maxFre = 0;

    for(int i=0;i<26;i++){
        if(freq[i] > maxFre)
        {
            maxFre = freq[i];
            ans = i + 'a';
        }
    }

    cout<<maxFre<<endl;
    cout<<ans<<endl;

    return 0;
}