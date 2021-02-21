#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        //space
       int val=i+1;
        for(int s=n-i-2;s>=0;s--){
            cout<<"\t";
        }
        for(int j=1;j<=((2*i)+1);j++){
            
            if(j<=i){
                
                cout<<val<<"\t";\
                val++;
                
            }else{
                           
                cout<<val<<"\t";
                val--;
                
                
                
            }
        }
        cout<<endl;
    }
   
    return 0;
}
