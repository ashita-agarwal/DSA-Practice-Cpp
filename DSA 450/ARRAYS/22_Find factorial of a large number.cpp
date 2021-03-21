#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;
void multiply(int n,vector<int> &num){
    int carry=0;
    int i;
    for( i=0;i<num.size();i++){
        int prod=num[i]*n;
        num[i]=(prod+carry)%10;
        carry=(prod+carry)/10;
    }
    while(carry){
        num.push_back(carry%10); //inserts element from end
        carry=carry/10;
        
    }
    
}

vector<int> factorial(int N){ //vector<int> is return type
        // code here
        vector<int> answer; //vector answer is the result
        answer.push_back(1);
        for(int i=2;i<=N;i++){
            multiply(i,answer);
        }
        reverse(answer.begin(),answer.end());
        return answer;
    
};

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<int> result = factorial(n);
	for(auto i=result.begin();i!=result.end();++i){
	    cout<<*i;
	}
	return 0;
}
