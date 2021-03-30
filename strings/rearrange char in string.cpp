#include <iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
    return a>b;
}

string solve(string s){
    int freq[26]={0};
    for(int i=0;i<s.length();i++){
        freq[s[i]-'a'] += 100;

    }
    for(int i=0;i<26;i++){
        if(freq[i] > 0){
        freq[i] += i;
        }
    }
    sort(freq,freq+26,compare);

    char a[1000];
    int k=0; //indx of a array
    a[s.length()]= '\0';
    int n= s.length();
    for(int i=0;i<26;i++){
        int count = freq[i]/100;
        char ch= freq[i]%100 + 'a';
        if(n % 2 ==0){
            if(count >= n/2 +1){
                return "not possible";
            }
        }else{
            if(count > n/2 +1){
                return "not possible";
            }
        }
         if(freq[i] > 0){
                for(int j=0;j<count;j++){  //putting largest freq character at even places
                    a[k]= ch;
                    k += 2;
                    if(k >= n){
                        k=1; //odd places se start hoga
                    }
                }
        }
    }
    //but we have to return as an string-->convert chaR Array into string
    string answer;
    answer = a;
    
    return answer;
}
int main() {
    string s;
    cin>>s;
    cout<<solve(s);
    return 0;
}
