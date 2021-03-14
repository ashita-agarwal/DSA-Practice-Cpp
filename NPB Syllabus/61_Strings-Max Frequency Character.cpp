#include <iostream>
using namespace std;

int main() {
    char a[1000000];
    cin>>a;
    int cnt=1,ans=0;
    char prev=a[0];
    for(int i=1;a[i]!='\0';i++){
        if(a[i]==prev){
            cnt++;
            ans=max(ans,cnt);
        }else{
            prev=a[i];
            cnt=1;
        }
    }
    cout<<"freq: "<<ans<<" ";

	return 0;
}
