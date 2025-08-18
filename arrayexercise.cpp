#include<iostream>
using namespace std;
int main(){
    int arr[5], count = 0;
    
    cout<<"Enter 5 numbers: ";
    for (int i=0; i<=4; i++){
        cin>>arr[i];
        if (arr[i]%2==0 && arr[i]%5==0){
            count++;
            //cout<<arr[i]<<" ";
        }
    }
    cout<<count;
}