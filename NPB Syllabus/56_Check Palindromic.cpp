#include <iostream>
using namespace std;
int main() {
        char a[1000];
        cin.getline(a,1000);
        
        bool flag =1;
        int lena;
        for(lena=1;a[lena]!='\0';lena++){}
        int i=0,j=lena-1;
        while(i<j){
                if(a[i]==a[j]){
                    i++;
                    j--;
                    continue;
                }else{
                    flag=0;
                    break;
                }
                
                
            }
        
        if(flag==1){
            cout<<"palindrome";

        }else{
            cout<<"not palindrome";
        }

       return 0;
}
