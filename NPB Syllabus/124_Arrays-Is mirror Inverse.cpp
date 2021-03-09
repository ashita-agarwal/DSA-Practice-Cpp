#include <iostream>
using namespace std;
int main() {
   int n,a1[10000],a2[10000];
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>a1[i];
   }
    for(int i=0;i<n;i++){
       cin>>a2[i];
   }
   bool flag=1;
    for(int i=0;i<n;i++){
        if(a2[a1[i]]==i){
            continue;
        }else{
            flag=0;
            break;
        }
        
    }
    if(flag==1){
        cout<<"mirror inverse";
    }else{
        cout<<"not mirror inverse";
    }

       return 0;
}
