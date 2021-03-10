#include <iostream>
#include<climits>
using namespace std;
int main() {
       int n,len_max;
       cin>>n;
       cin.ignore();
       char a[100],max[100]={0};
       for(len_max=0;a[len_max]!='\0';len_max++){}
       
       for(int i=0;i<n;i++){
           cin.getline(a,100);
           int len_a;
            for(len_a=0;a[len_a]!='\0';len_a++){}
            if(len_a>len_max){
                for(int i=0;i<=len_a;i++){
                    max[i]=a[i];
                    
                }
                len_max=len_a;
            }


       }
       for(int i=0;i<len_max;i++){
           cout<<max[i];

       }
       return 0;
}
