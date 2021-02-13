#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c; //ax^2+bx+c 
    cin>>a>>b>>c;
    int d= pow(b,2)-4*a*c; //determinant
    int r1=(-b+ sqrt(pow(b,2)-4*a*c))/2*a;
    int r2=(-b- sqrt(pow(b,2)-4*a*c))/2*a;
    if(d>0){
         cout<<"Real and distinct"<<endl;
        if(r1>r2){
            cout<<r2<<" "<<r1<<endl;
        }else if(r2>r1){
            cout<<r1<<" "<<r2<<endl;
        }
       
    }else if(d<0){
        cout<<"Imaginary";
    }else{
        cout<<r1<<endl;
        cout<<"Real and equal";
    }
    
    return 0; 
}