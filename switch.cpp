#include<iostream>
using namespace std;
int main(){
    int option,a,b;
    cout<<"=== CALCULATOR ===\n\n";
    cout<<"1: SUMMATION\n ";
    cout<<"2: SUBTRACTION\n ";
    cout<<"3: MULTIPLICATION\n";
    cout<<"4: DIVISION\n";
    cout<<"5: EXIT\n";
    cout<<"Choose a option (1-4)\n";
    cin>>option;

    switch(option){
    case 1: 
         cin>>a>>b;
         cout<<"The Summation is: "<<a+b;
         break;
    case 2:
        //int a,b;
         cin>>a>>b;
         cout<<"The Subtraction is: "<<a-b;
         break;
    case 3:
        //int a,b;
         cin>>a>>b;
         cout<<"The Multiplication is: "<<a*b;
         break;
    case 4:
        //int a,b;
         cin>>a>>b;
         cout<<"The Division is: "<<a/b;
         break;
    case 5:
        cout<<"EXIT";
    default:
        cout<<"Invalid Option: choose a valid option between 1 to 5";
    }
    

        
        
}