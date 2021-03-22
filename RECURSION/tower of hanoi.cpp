#include <iostream>

using namespace std;
void toh(int n,char source ,char helper,char destination){
    //base case
    if(n==0){
        return ;
    }
 //recursive case
 //1.move n-1 disks from source to helper
    toh(n-1,source,destination,helper);
    //2.manually place nth disk from source to destination
    cout<<" take disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    //`3.move n-1 disk from helper to destination
    toh(n-1,source,helper,destination);
}
int main() {
    int n;
    cin>>n;

    toh(n,'A','B','C');
    return 0;
}
