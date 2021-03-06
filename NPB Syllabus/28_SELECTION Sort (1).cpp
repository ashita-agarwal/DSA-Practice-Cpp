#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //SELECTION SORT-->two subarrays-->> unsorted , sorted
    int min;//find min and place it at correct pos
    for(int i=0;i<=n-2;i++){
        min=i; //so we have assumed i th element as min
        for(int j=1+i;j<=n-1;j++){
            if(a[j]<a[min]){
                min=j; //now we found jth element as min

            }
            
        }
        //min found from unsorted array
        swap(a[min],a[i]); //correct pos
    }


    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}