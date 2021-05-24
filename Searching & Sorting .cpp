#include <iostream>
#include<algorithm>  //only to use swap function
using namespace std;

/////////////////////   SEARCHING  ///////////////////////

int LinearSearch(int a[],int n ,int key){
    //returns the index of key if found
    //T.C---> O(n) -->traverse thru n elements
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;//if key not present in array
}

int BinarySearch(int a[],int n,int key){
     //input array should be sorted 
     //T .C -->O(logn)
     int start =0;
     int end = n-1;
     while(start <= end){
         int mid = (start+end)/2;
         if(a[mid]==key){
             return mid;
         }else if(a[mid]>key){
             end = mid-1;
         }else{
             start = mid+1;
         }
     }
     return -1;
}

/////////////////////  SORTING   ////////////////////

void BubbleSort(int a[],int n){
    ///Biggest air bubble comes out first in water
    //max elem reaches its correct position first 
    //T.C--> O(n^2)
    //this counter should do n-1 iterations
    for(int cnt =1 ; cnt<= n-1 ; cnt++){
        //for every ith iteration,till (n-cnt)th will be checked\
        //for 1st iteration--> n-1 elements 
        //for 2nd iteration--> last element is sorted ,so n-2 elements 
        for(int i=0;i<=(n-cnt);i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
    }
}

void SelectionSort(int a[],int n ){
    //select minimum from unsorted array and swap with first elem of unsorted array
    //T.c --> O(n^2)
    for(int i=0;i< n-1;i++){ //iterate till 2nd last elem
        for(int j=i+1;j<n;j++){ //unsorted array
            if(a[j]<a[i]){
                swap(a[i],a[j]);
            }
        }
    }
}

void InsertionSort(int a[],int n){
    //T.C--> O(n^2)
    // INSERT an element from unsorted arr at its correct pos in sorted arr
    
    for(int i=1;i<n;i++){ //this iterates over sorted array 
        int curr = a[i];
        int j = i-1; //last element in sorted array
        while(j>=0 and a[j]>curr){
            /*while current elem in unsorted array 
            is small than a[j]..shift a[j] one place ahead*/
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=curr;


    }
}


////////  MERGE SORT START ////////
//T.C --> O(nlogn)  and S.C --> O(n)
// divide and conquer 

void merge(int a[],int l,int m,int r){
    //this function will merge into a sorted array
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];
    int R[n2]; //temp arrays

    //copying the elements 
    for(int i=0;i<n1;i++){
        L[i]=a[l+i]; 
    }
    for(int i=0;i<n2;i++){
        R[i]=a[m+1+i]; 
    }
    //compare 
    int i=0;
    int j=0;
    int k=l; //org array
    while(i<n1 and j<n2){
        if(L[i] <= R[j]){
            a[k]=L[i];
            i++;
            k++;
        }else{
            a[k]=R[j];
            j++;
            k++;
        }
    }
    //remaining elements of temp arrays
    while(i<n1){
        a[k]=L[i];
        k++;
        i++;
    }
     while(j<n2){
        a[k]=R[j];
        k++;
        j++;
    }

}
void mergeSort(int a[],int l,int r){
    
    if(l<r){ //base condition 
        int m = (l+r)/2;
        // 1 . dividing into two by mid 
         mergeSort(a,l,m) ;  //2. sort the left part
         mergeSort(a,m+1,r); // sort the right part

        //3. merge them 
        merge(a,l,m,r);
    }
}
//////// MERGE SORT FINISH ///////////


/////////   QUICK-SORT  START  ////////////
//T.C-->O(nlogn) best case when pivot is median
//T.C-->O(n^2) worst case when pivot is last elem
//divide and conquer

int partition(int a[],int l,int r){
    int pi = a[r]; //last elem as pivot
    int i = l-1 ; //will have nearest smallest number to pivot 
    for(int j=l;j<r;j++){
        if(a[j]<pi){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i + 1], a[r]);
    return (i + 1);
}
void QuickSort(int a[],int l,int r){
    if(l>=r){return ;} //base case
    //1.PIVOT at correct pos  
     int pi=partition(a,l,r);
    //2.sort left of pivot 
     QuickSort(a,l,pi-1);
    // 3.sort right of pivot  
     QuickSort(a,pi+1,r); 
}
/////////   QUICK-SORT FINISH   ////////////
int main() {

    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // int key;
    // cin>>key;
    // cout << LinearSearch(a,n,key) <<endl;
    // cout << BinarySearch(a,n,key) <<endl;

    //BubbleSort(a,n);cout<<endl;
    //SelectionSort(a,n);cout<<endl;
    //InsertionSort(a,n);cout<<endl;
    //mergeSort(a,0,n-1);cout<<endl;
    QuickSort(a,0,n-1);cout<<endl;

    ////// PRINT ARRAY ////
    for(int i=0;i<n;i++){ cout<< a[i] << " ";}
    
}
