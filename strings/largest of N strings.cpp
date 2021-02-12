#include <iostream>
using namespace std;
int main() {
   
    char a[100],largest[100];
    int lena,lenl=0; //lenl--largest length,lena--length of a 
    int n;
    cin>>n;
    cin.ignore(); //ignore whitespace after reading a number before string
    for(int i=0;i<n;i++){
        cin.getline(a,100);
        //length of a
        for(lena=0;a[lena]!='\0';lena++){}
        if(lena>lenl){
            //copy string a into largest
           
           //null will also get copied 
                      
            for(int i=0;i<=lena;i++){
                largest[i]=a[i];
               
            }
            //update largest lenght also
            lenl=lena;
        }
    }
   cout<<"largest string: "<<largest<<endl;
   cout<<"length: "<<lenl<<endl;
      

  
    return 0;
}
