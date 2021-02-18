#include <iostream>
using namespace std;
int main() {
    char a[100];
    cin>>a;
    int ans=0,cnt=1;
    char prev = a[0];
    for(int i=1;a[i]!='\0';i++){
        if(a[i]==prev){
            cnt++;
            ans=max(ans,cnt);
        }else{
            
            cnt=1;
            prev=a[i];
        }
    }
    
    cout<<ans; //max freq of consecutive char
    return 0;
}
