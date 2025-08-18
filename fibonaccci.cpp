#include<iostream>
using namespace std;
int main(){

    int n=13, f1 = 0, f2 = 1, f3 = 0;
    cout<<f1<<" "<<f2<<" ";
    for (int i=1; i<=INT_MAX; i++){
        if (i>=300)
        break;
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
          if (f3>=200){
            break;
          }
        cout<<f3<<" ";
        
    }
    
}