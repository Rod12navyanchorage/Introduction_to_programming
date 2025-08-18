#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"ENTER A NAME: ";
    cin>>name;

    int start = 0;
    int end = name.length()-1;
    
    bool isPalindrome = true;
    while(start<end){
        if(name[start] != name[end]){
             isPalindrome = false;
             break;
        }
        start++;
        end--;
    }
    if(isPalindrome==true){
        cout<<"Is a Palindrome";
    }else{
        cout<<"Is not a Palindrome";
    }
}