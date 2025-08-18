#include<iostream>
using namespace std;
int main(){

    int numbers[] = {8, 9, 6, 8, 9};

    for (int i=4; i>=0; i--){
         
        if (numbers[i]==8){
            cout<<i;
            break;
        }
    }


}