#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter how many courses you have taken: ";
    cin>>n;
    cout<<"Enter "<<n<<" Subject marks: ";
    float grade[n];
    float sum=0;
    for(int i=0; i<n; i++){
        cin>>grade[i];
        if (grade[i]<50){
          sum += (0*3);
    }else if (grade[i]>=50 && grade[i]<60){
        sum += (2.25*3);
    }else if (grade[i]>=60 && grade[i]<65){
        sum += (2.50*3);
    }else if(grade[i]>=65 && grade[i]<70){
        sum += (2.75*3);
    }else if(grade[i]>=70 && grade[i]<75){
        sum += (3.0*3);
    }else if (grade[i]>=75 && grade[i]<80){
        sum += (3.25*3);
    }else if(grade[i]>=80 && grade[i]<85){
        sum += (3.50*3);
    }else if(grade[i]>=85 && grade[i]<90){
        sum += (3.75*3);
    }else {
        sum += (4.0*3);
    }
    }
    cout<<"Your CGPA is : "<<sum/(n*3);

}