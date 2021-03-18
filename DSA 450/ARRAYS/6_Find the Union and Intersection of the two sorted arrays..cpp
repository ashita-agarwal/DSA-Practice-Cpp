#include <iostream>
using namespace std;
void unionArray( int n,int a[],int m,int b[] ){
    int i=0,j=0;
    while(i<n and j<m){
        while(i<n and a[i]==a[i+1]){
            i++;
        }
        while(j<m and b[j]==b[j+1]){
            j++;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }else{
            //equal elements printed once
            cout<<b[j]<<" ";
            i++,j++;
        }
    }
    //printing remaining array
        while(i<n){
        cout<<a[i]<<" ";
        i++;
        }
    
    
    while(j<m){
        cout<<b[j]<<" ";
        j++;
    }
    
}
void intersecArray( int n,int a[],int m,int b[] ){
    int i=0,j=0;
    while(i<n and j<m){
        while(i<n and a[i]==a[i+1]){
            i++;
        }
        while(j<m and b[j]==b[j+1]){
            j++;
        }
        if(a[i]<b[j]){
            
            i++;
        }else if(a[i]>b[j]){
            
            j++;
        }else{
            //equal elements printed once
            cout<<b[j]<<" ";
            i++,j++;
        }
    }
}
int main() {
    //input two sorted array
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	 int m;
    cin>>m;
    int b[1000];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
	unionArray(n,a,m,b);
	cout<<endl;
    intersecArray(n,a,m,b);
	return 0;
}
