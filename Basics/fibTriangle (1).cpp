#include<iostream>
using namespace std;
int main(){
    int N,a=0,b=1,c;
    cin>>N;
    // think of starting two rows separately by using if else
    //for row 1
    if(N==1){
    cout<<a<<endl;}
    //for row 2 if exists 
    if(N==2)
    {
        c=a+b;
        cout<<b<<"\t"<<c<<endl;
        a=b;
        b=c;
    }
    if(N>2){
        cout<<a<<endl;
        c=a+b;
        cout<<b<<"\t"<<c<<endl;
        a=b;
        b=c;
         // start from row 3
        for(int i=3;i<=N;i++){
            // each row will contain numbers equal to row number
            // cout<<a<<"\t"<<b<<"\t";  this line of yours will be printed again and again which is not needed
            //for(int fib=3;fib<=(N*(N+1)/2);fib++)  this loop is not needed
            //this loop is correct. It will print fibonaaci series
                for(int j=1;j<=i;j++){
                        
                        c=a+b;
                        cout<<c<<"\t";
                        a=b;
                        b=c;
                    
                } 
            cout<<endl; 
            
    }
    }
   
    return 0;
}