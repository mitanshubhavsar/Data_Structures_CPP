#include <iostream>
using namespace std ;
int main () {
int rows, i , j;

cout << "Enter the number of rows : \n " ;
cin >> rows ;

for (  i = 1 ; i <= rows ; i ++) {
    int space = ((2*rows)-(2*i));
    for (  j = 1 ; j <= i ; j ++) {
        cout << "*" ;
    }
    for(j = 1 ; j<= space; j++){
        cout<< " ";
        }
    for(int j=1; j<= i; j++){
        cout<< "*";
        }    
        cout<<"\n";
}

for (  i = rows ; i >= 1 ; i--) {
    int space = ((2*rows)-(2*i));
    for (  j = 1 ; j <= i ; j ++) {
        cout << "*" ;
    }
    for(j=1 ; j <= space; j++){
        cout<< " ";
        }
    for(int j = 1; j<= i; j++){
        cout<< "*";
        }    
        cout<<"\n";     

}


return 0 ;
}