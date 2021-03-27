#include <iostream>
using namespace std;
int sizeK(int *freq){
    int cnt=0;
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cnt++;
        }
    }
    return cnt;
}
void longest_k_unique_char_string(char *a,int k){
    int i=0;
    int j=0;
    int freq[26]={0};
    int ans=-1;
    while(a[j]!='\0'){
        freq[a[j]-'a']++;
        if(sizeK(freq)==k){
            int window_length=j-i+1;
            ans=max(window_length,ans);
        }
        else if(sizeK(freq)>k){
            while(a[i]='\0' and sizeK(freq)>k){
                freq[a[i]-'a']--;
                i++;
            }
        }
        j++;
    }
    cout<<ans;
}
int main() {
	// your code goes here
	char a[]="aabacbebebe";
	int k=3;
	//cin>>k;
	longest_k_unique_char_string(a,k);
	return 0;
}
