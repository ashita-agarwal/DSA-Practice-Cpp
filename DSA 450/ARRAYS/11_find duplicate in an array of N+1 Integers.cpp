#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
	
    int freq[1000];
    for(int i=0;i<=n;i++){
        freq[i]=0;
    }
    for(int i=0;i<=n;i++){
        freq[a[i]]++;
    }
    for(int i=0;i<=n;i++){
        if(freq[i]>1){
            cout<<i;
            break;
        }
    }
	return 0;
}
