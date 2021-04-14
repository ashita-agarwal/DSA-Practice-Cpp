#include <iostream>
using namespace std;

void generateDecodings(char* inp,char* out,int i,int j){
    //BASE CASE--> hv i reached the end of the inp array
    if(inp[i]=='\0'){
        //terminate and print output
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }
    //at the ith digit of the inp and make a decision
    
    //A.decision? include only ith digit
        //A.1 extract the ith digit from input
            int digit = inp[i] -'0'; // '9' - '0' = 9
            
        if(digit!=0){
            //A.2 map the ith digit to its character
                //A-->1 B-->2
                char ch= digit + 'A' -1; 
                //1 + 'A' -1 = 1+65 -1 =65 ='A'   
                // 2 + 'A' -1 =2+65-1 = 66 ='B'
            //A.3 write the ch to the jth index of out
            out[j] =ch;
            //A.4 recursion
            generateDecodings(inp,out,i+1,j+1);
        
        //B.decision? form a number using ith and i+1 th digit
        if(inp[i+1]!='\0'){  
            //B.1 extract i+1 th digit
            int next_digit = inp[i+1] - '0';
            //B.2 form a number using ith and i+1 th digit
            int number = digit * 10 +next_digit;
                if(number<=26){
                    //B.3 map the number to its character
                    ch = number + 'A' -1;
                    //B.4 update the jth index of out
                    out[j] =ch;
                    //B.5 recursion
                    generateDecodings(inp,out,i+2,j+1);
                }
        }
        }
}
int main(){

    char inp[100];
    cin>>inp;

    char out[100];

    generateDecodings(inp,out,0,0);

    return 0;
}
