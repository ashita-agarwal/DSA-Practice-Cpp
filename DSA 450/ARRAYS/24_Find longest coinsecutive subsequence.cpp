#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int N)
    {
      
      sort(arr,arr+N);
      int min=arr[0];
      int ans=0;
      int max_ans=0;
      int counting=min;
      for(int i=0;i<N;i++){
          if(arr[i]==arr[i-1]){
              continue;
          }
          if(arr[i]==counting){
              counting++;
              ans++;
              max_ans=max(max_ans,ans);
              continue;
          }else{
              ans=0;
              counting++;
              max_ans=max(max_ans,ans);
          }
      }
      return max_ans;
    }
int main() {
// 	int a[]= {2,6,1,9,4,5,3};
// 	int n=sizeof(a)/sizeof(int);
        int n;
        cin>>n;
        int a[10000];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
	cout<<findLongestConseqSubseq(a,n);
	return 0;
}
