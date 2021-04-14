#include <iostream>
#include<string>
#include<climits>
using namespace std;

string getMinLenWindow(string text,string pattern){

    int N=text.size();
    int M = pattern.size();
    string window="";
    if(M>N){
        //no window exists
        return window;
    }
    int pattern_freq_map[256]={0}; //store freq of each char
    for(int i=0;i<M;i++){
        char ch=pattern[i];
        pattern_freq_map[ch]++;
    }
    int window_freq_map[256]={0};
    int i=0; //start of window
    int min_len = INT_MAX;
    int start_idx=-1;
    int cnt=0;
    for(int j=0;j<N;j++){
        char ch = text[j];
        //expand the window
        window_freq_map[ch]++;
        //check if window is valid
        if(pattern_freq_map[ch]!=0){
            //ch is present in the pattern
            if(window_freq_map[ch]<=pattern_freq_map[ch]){
                cnt++;
            }
        }
        if(cnt==M){
            //shrink the window to remove unwanted char until it is valid
                //unwanted-->if a char is not present in pattern 
                //or present bt in excess in window
                char temp =text[i];
                while(pattern_freq_map[temp]==0 or pattern_freq_map[temp]<window_freq_map[temp]){
                    //start shrinking
                    window_freq_map[temp]--;
                    i++;
                    temp = text[i];
                }
                int window_len = j-i+1;
                if(window_len <min_len){
                    min_len=window_len;
                    start_idx =i;
                }
        }
    }
    if(start_idx!=-1){
        window=text.substr(start_idx,min_len);
    }
    return window;
    // if(start_idx==-1){
    //     //no window found
    //     return window; //window=""
    // }else{
    //     window =text.substr(start_idx,window_len);
    //     //str="abcde" str.substr(1,3) --> bcd
    //     return window;
    // }
    
}

int main(){

   string text;
   getline(cin,text);

   string pattern;
   getline(cin,pattern);

   string window = getMinLenWindow(text,pattern);
   cout<<window<<" "<<window.size();

    return 0;
}
