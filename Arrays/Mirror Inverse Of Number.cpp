#include <iostream>

using namespace std;
int main() {
    int t; //test cases
    
    cin>>t;
    
    
    for(int l=1;l<=t;l++){
        int a[100000]={0}; //array where the digits will be stored
        long long num; //number
        int rem,flag=1;
        cin>>num;
        int cnt=1;
        while(num>0){
                rem=num%10; //remainder
                
                a[cnt]=rem; 
                num=num/10; 
                cnt++;         
        }
        for(int j=0;j<cnt-1;j++){
            if(a[a[j]]==j){
                continue;
            }else{
                flag=0;
                break;
            }
           
        }
        if(flag==1){
            cout<<"true";
        }else{
            cout<<"false";
        }
        cout<<endl;
    }
    
    return 0;
}
