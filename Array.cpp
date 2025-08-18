#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i=0; i<=4; i++)
    {
        cin>>arr[i];
    }
    int small= arr[0];
    for (int i=0; i<=4; i++)
    {
        if (arr[i]<small)
        {
            small = arr[i];
            
        }
    }
    cout<<small;
}
    