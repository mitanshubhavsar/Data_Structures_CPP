#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    string str1 = "lkmjkwecw";

    sort(str1.begin(),str1.end());

    transform(str1.begin(),str1.end(),str1.begin(),:: toupper);
    cout<<str1<<endl;

    transform(str1.begin(),str1.end(),str1.begin(),:: tolower);
    cout<<str1<<endl;

    string s1 = "sdcdsvsvsd";
    string s2 = "EVCDEVEVE";

    //to upper case
    for(int i=0;i<=s1.size();i++){
        s1[i] -= 32;
    }

    cout<<s1<<endl;

    for(int i=0;i<=s2.size();i++){
        s2[i] += 32;
    }

    cout<<s2<<endl;


    

    return 0;
}