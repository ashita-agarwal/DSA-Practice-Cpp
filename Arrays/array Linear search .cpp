#include <iostream>
using namespace std;
int main() {
    int arr[]={1,2,3,4,5,};
    int n=sizeof(arr)/sizeof(int);
    for (int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cin>>key;
    bool isKeyFound=false;
    for (int i=0;i<5;i++){
        if(arr[i]==key){
            cout<<"key found at "<<i<<endl;
            isKeyFound=true;
            break;  //if no repetitive value
            }
    }
    if (isKeyFound==false){
        cout<<"key not found"<<endl;
    }
    return 0;
}
