#include <bits/stdc++.h>

using namespace std;

int max (int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else {
            return c;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else {
            return c;
        }
    }
}

bool IsPythagorian_triplet (int x , int y, int z){
    int a,b,c;
    a = INT_MIN;
    a = max(x,y,z);
    if (a == x){
        b = y;
        c = z;
    }
    else if (a == y){
        b = x;
        c = z;
    }
    else {
        b = x;
        c = y;
    }

    if(a*a == b*b + c*c){
        return true;
    }
    else return false;
}

int main() {
    int a,b,c;
    bool check;
    cin>>a>>b>>c;

    check = IsPythagorian_triplet(a,b,c);

    if(check){
        cout <<"Pythagorian Triplets";
    }
    else {
        cout <<"Not Pythagorian Triplets";
    }
        


    return 0;
}