#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for(int i=0;i<v.size();i++){ //by array method
        cout<<v[i]<<" ";
    } // 1 2 3
    cout<<"\n";

    vector<int>::iterator it;   //by iterator
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    } // 1 2 3
    cout<<"\n";

    for(auto element:v){
        cout<<element<<" ";
    } // 1 2 3
    cout<<"\n";

    v.pop_back(); // 1 2

    vector<int> v2 (3,50); // 50 50 50

    swap(v,v2);

    for(auto element:v){
        cout<<element<<" ";
    } // 1 2 3
    cout<<"\n";

    
    for(auto element:v2){
        cout<<element<<" ";
    } // 1 2 3
    cout<<"\n";

    sort(v.begin(),v.end());


    


    return 0;
}