#include <iostream>

using namespace std;
int main() {
      int n;
      cin>>n;
      cin.ignore();
      char a[1000];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
     cout<<n<<a;
     
       return 0;
}
