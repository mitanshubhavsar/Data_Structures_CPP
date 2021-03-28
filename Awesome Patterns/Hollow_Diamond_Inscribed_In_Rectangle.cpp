#include <iostream>
using namespace std ;
int main () {
int rows, i , j;

cout << "Enter the number of rows : \n " ;
cin >> rows ;
int space = (2*rows - 1) / 2;
for (  i = 1 ; i <= rows ; i ++) {
    for (  j = 1 ; j <= space ; j ++) {
        cout << "*" ;
    }
    for(j=1; j <= 2*i -1 ; j++){
        if(j == 1 || j==2*i -1){
            cout<<"*";
            }
            else{
                cout<<" ";
                }
    }          
     for(int j=1 ; j<=space ;j++){
            cout<<"*";
         }           
        cout<<endl;
        
        space--;

}

space = 0;
for(i=rows; i>=1; i--){
    for(j=1; j<=space ; j++)
    {
        cout <<"*";
        } 
    for(j=1;j<=2*i-1;j++){
        if(j ==1 || j==2*i -1) {
            cout<< "*";
            }
            else{
                cout<<" ";
                }
    }          
        for(int j =1;j<=space;j++){
            cout<<"*";
            }
            cout<<endl;
            space++;
        
        
    }
return 0 ;
}