#include <iostream>

using namespace std;

int first_Occurance(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }

    if(arr[i]==key){
        return i;
    }
    return first_Occurance(arr,n,i+1,key);
}

int last_Occurance(int arr[],int n,int i,int key){
     if(i==n){
        return -1;
    }
    int restArray = last_Occurance(arr,n,i+1,key);
    if(restArray!=-1){
        return restArray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}

int main(){
    int arr[]={4,2,1,2,5,2,7};
    cout<<first_Occurance(arr,7,0,2)<<endl;
    cout<<last_Occurance(arr,7,0,2)<<endl;

    return 0;
}