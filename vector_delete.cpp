#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr = {5,10,15,20};

    arr.erase(find(arr.begin(), arr.end(), 10)); // delete after searching

    arr.erase(arr.begin()+3);  //direct delete


    for (int i: arr){
        cout<<i<<" ";
    }
}