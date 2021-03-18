#include <iostream>
using namespace std;
int main() {
    int a[10000];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;

    for(int i=0;i<n;i++){
        if(a[i]==0){cnt0++;}
         if(a[i]==1){cnt1++;}
          if(a[i]==2){cnt2++;}
    }
    while(cnt0-- ){cout<<0<<" ";}
     while(cnt1-- ){cout<<1<<" ";}
      while(cnt2-- ){cout<<2<<" ";}
    return 0;
}
