#include <iostream>

using namespace std;
int binarySearch(int *a,int s,int e,int key){
    //base case
    if(s>e){
        return -1;
    }
 //recursive case
    int mid=(s+e)/2;
    if(a[mid]==key) return mid;
    else if(a[mid]>key) return binarySearch(a,s,mid-1,key);
    else return binarySearch(a,mid+1,e,key);
}
int main() {
   int a[]={1,2,3,4,6,7,8,9,10};
   int n=sizeof(a)/sizeof(int);
   int k;
   cin>>k;
   int ans=binarySearch(a,0,n,k);
   cout<<ans;
    return 0;
}
