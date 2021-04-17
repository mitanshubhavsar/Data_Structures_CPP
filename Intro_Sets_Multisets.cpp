#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n";
    cout<<s.size()<<"\n";
    s.erase(2);  
    for(auto i : s)
        cout<<i<<" ";
    cout<<"\n"; 

    multiset<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(2);
    st.insert(2);
    st.insert(2);
    st.insert(3);
    for(auto i : st)
        cout<<i<<" ";
    cout<<endl;

    st.erase(st.find(2));
    for(auto i : st)
        cout<<i<<" ";
    cout<<endl; 

    st.erase(2);
    for(auto i : st)
        cout<<i<<" ";
    cout<<endl;    

    unordered_set<int> o;
    o.insert(3);
    o.insert(2);
    o.insert(4);
    o.insert(2);
    o.insert(2);
    o.insert(2);
    for(auto i : o)
        cout<<i<<" ";
    cout<<endl;

    o.erase(o.find(2));
    for(auto i : o)
        cout<<i<<" ";
    cout<<endl; 

    o.erase(3);
    for(auto i : o)
        cout<<i<<" ";
    cout<<endl;


    return 0;
}
