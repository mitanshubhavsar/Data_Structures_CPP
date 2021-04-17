#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue<int, vector<int>> pq; //max heap
    pq.push(2);
    pq.push(3);
    pq.push(1);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<endl;

    priority_queue<int, vector<int>, greater<int>> pqm;  //min heap
    pqm.push(2);
    pqm.push(1);
    pqm.push(3);

    cout<<pqm.top()<<endl;
    pqm.pop();
    cout<<pqm.top()<<endl;
    return 0;
}