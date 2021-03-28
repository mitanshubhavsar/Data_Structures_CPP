#include <iostream>
using namespace std ;
int main () {
int rows , columns ;
cout << "Enter the number of rows : \n " ;
cin >> rows ;
for ( int i = 1 ; i <= rows ; i ++) {
for ( int j = rows ; j >= i ; j--) {
    cout << "*" ;
}
cout << endl;
}
return 0 ;
}