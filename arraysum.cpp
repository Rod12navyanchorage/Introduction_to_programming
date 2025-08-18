#include<bits/stdc++.h>
using namespace std;
int main(){
    int result=0;  //6
    int arr[] = {5, 3, 8, 10, 15};

    for (int i=0; i<5; i++){
        result = arr[i] + result;    //
    }
    cout<<result;
}