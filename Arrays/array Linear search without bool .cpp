#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,7,8};
    int n=sizeof(arr)/sizeof(int);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cin>>key;
    //bool isKeyFound=false;
    int i;
    for ( i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"key found at "<<i<<endl;
            //isKeyFound=true;
            break;  //if no repetitive value
            }
    }
    // if (isKeyFound==false){
    //     cout<<"key not found"<<endl;
    // }
    if(i==n){
        cout<<"Key not found";
    }
    return 0;
}
