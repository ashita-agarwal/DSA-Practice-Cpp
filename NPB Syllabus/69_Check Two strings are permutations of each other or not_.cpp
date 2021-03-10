#include <iostream>
using namespace std;

int main() {
	// your code goes here
	char a[100];
	cin>>a;
   //freq array all elem 0
   
    int freq[26]={0};
    for(int i=0;a[i]!='\0';i++){
        char ch=a[i];
        int indx=ch-'a';
        freq[indx]++; //mapping alphabets frequency 
    }
    char b[100];
    cin>>b;
    //checking the second string
    for(int i=0;b[i]!='\0';i++){
        char ch=b[i];
        int indx=ch-'a';
        freq[indx]--;
    }
    //Permutation if freq array is all 100
    bool flag=1;
    int i;
    for( i=0;i<26;i++){
        if(freq[i]!=0){
           flag=0;
            break;
        }
    }
    if(flag==1){
        cout<<"Permutation";
        
    }else if(flag==0){
        cout<<"not Permutation";
    }
    
	return 0;
}
