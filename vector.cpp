#include<bits/stdc++.h>
using namespace std;
int main (){
    vector<long long int> arr = {10,20,30,40,50};
    //arr.push(3);
    arr.push_back(50);
    arr.push_back(100);
    arr.push_back(10000000000);
    arr.pop_back();
    arr.pop_back();
    for (int x : arr){
        cout<<x<<" ";
    }



}