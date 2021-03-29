#include <iostream>

using namespace std;

int Binary_To_Decimal( int n) {
    int ans=0;
    int x =1;
    while (n>0){
       int y = n % 10;
       ans += x*y;
       x *= 2;
       n /= 10;
    }
    return ans;
}

int Octal_To_Decimal(int n) {
    int ans=0;
    int x =1;
    while (n>0){
       int y = n % 10;
       ans += x*y;
       x *= 8;
       n /= 10;
    }
    return ans;
}

int Hexadecimal_To_Decimal(string n) {
    int ans=0;
    int x =1;

    int s = n.size();
    for(int i=s-1; i>=0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x*(n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }
    
    return ans;
}

int Decimal_To_Binary(int n) {
    int x=1;
    int ans=0;
     
    while(x<=n){
        x *= 2;
    }
    x/=2;

    while (x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans *10 + lastDigit;
    }
    return ans;
    
}

int Decimal_To_Octal(int n) {
    int x=1;
    int ans=0;
     
    while(x<=n){
        x *= 8;
    }
    x/=8;

    while (x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=8;
        ans = ans *10 + lastDigit;
    }
    return ans;
    
}

string Decimal_To_Hexadecimal(int n) {
    int x=1;
    string ans="";
     
    while(x<=n){
        x *= 16;
    }
    x/=16;

    while (x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=16;
        if(lastDigit <= 9)
            ans = ans + to_string(lastDigit);
        else 
        {
          char c = 'A' + lastDigit - 10;
          ans.push_back(c);  
        }   
    }
    return ans; 
    
}

int main() {
    int n;
    string s;
    cin>>n;
    cin>>s;

    int bin_to_dec_number,oct_to_dec_number,hexa_to_dec_number;
    int dec_to_bin_number,dec_to_oct_number;
    string dec_to_Hexa_number;


    bin_to_dec_number = Binary_To_Decimal(n);
    cout<<bin_to_dec_number<<endl;

    oct_to_dec_number = Octal_To_Decimal(n);
    cout<<oct_to_dec_number<<endl;

    hexa_to_dec_number = Hexadecimal_To_Decimal(s);
    cout<<hexa_to_dec_number<<endl;

    dec_to_bin_number = Decimal_To_Binary(n);
    cout<<dec_to_bin_number<<endl;

    dec_to_oct_number = Decimal_To_Octal(n);
    cout<<dec_to_oct_number<<endl;

    dec_to_Hexa_number = Decimal_To_Hexadecimal(n);
    cout<<dec_to_Hexa_number<<endl;
    

    return 0;
}