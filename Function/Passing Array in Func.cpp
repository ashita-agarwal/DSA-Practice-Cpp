#include <iostream>
using namespace std;
void Print(int a[],int n){ //a[100] or a[]
    //array and size is passed
    for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }

}
//by default array are passed by reference
void Bubblesort(int a[100],int n){
     for (int i=0;i<=n-2;i++){
        for(int j=0;j<=n-2-i;j++){
            if(a[j]>a[j+1]){
               
                a[j]=(a[j]+a[j+1])-(a[j+1]=a[j]);

                
            }
        } 
    }
     for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    
}

int main(){
    int a[100]={1,2,6,4,5,3};
    int n=6;
    Print(a,n);
    cout<<endl;
    Bubblesort(a,n);
    
    cout<<endl;
    return 0;
}
