#include<iostream>
using namespace std;
int main(){

    string name;
    cout<<"Enter yo name: ";
    cin>>name;

    int len = name.length()-1;
    for(int i=len; i>=0; i--){
        cout<<(char)tolower(name[i]);
    }

}