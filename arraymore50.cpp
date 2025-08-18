#include<iostream>
using namespace std;
int main(){
    int guess, arr[5] = {2, 6, 53, 499, 43};
    bool flag=true;
   cout<<"Type a no: ";
   cin>>guess;
   for (int i=0; i<=4; i++){
    if (arr[i]>guess){
        flag=false;
    }else{
        flag = true;
    }
   }
    if (flag==false){
        cout<<"YES, there's is a bigger value.";
    }else{
        cout<<"NO!!";
    }

}