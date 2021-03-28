#include <iostream>
using namespace std ;
int main () {
int rows, i , j;

cout << "Enter the number of rows : \n " ;
cin >> rows ;
int space = rows-1;
for (  i = 1 ; i <= rows ; i ++) {
    for (  j = 1 ; j <= space ; j ++) {
        cout << " " ;
    }
    space--;
    for(j=1; j <= i ; j++){
        cout<< j<<" ";
        }
        cout<<endl;
        

}


return 0 ;
}