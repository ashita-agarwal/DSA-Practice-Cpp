#include<iostream>
using namespace std;
int main(){
    
   int characters=0,special=0,digits=0,whitespaces=0;
   char ch;
   cin>>ch;
   while(ch!='$'){// and == && , or == ||
       if(ch>'a' and ch<='z' or ch>='A' and ch<='Z'){
           characters++;

       }
       else if(ch>='0' and ch<='9'){
           digits++;
       }
       else if(ch==' ' or ch=='\t' or ch=='\n'){
           whitespaces++;
       }
       else {
           special++;
       }
       ch=cin.get(); //considers whitespaces
   }
   cout<< "special "<<special<<endl;
   cout<<"char "<<characters<<endl;
   cout<<"digits "<<digits<<endl;
   cout<<"special "<<special<<endl;
    cout<<endl;
    return 0;
}