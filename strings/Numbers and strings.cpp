#include <iostream>
using namespace std;
int main() {
    char a[100];
    int n;

    cin>>n;
    //10 helloworld
    /*10
      hello world*/
      cin.ignore(); //this will ignore whitespace after reading number before string
    cin.getline(a,100);

    cout<<n<<endl;
    cout<<a<<endl;
    return 0;
}
