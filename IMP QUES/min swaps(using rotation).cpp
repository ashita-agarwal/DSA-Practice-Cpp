#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int a[]={8,7,9,1,3};
    int n=5;

    pair<int,int> p[10000];

    for(int i=0;i<n;i++){
        p[i].first = a[i];
        p[i].second = i;
    }
    for(int i=0;i<n;i++){
        cout<<"("<<p[i].first<<","<<p[i].second<<") ";
    }
    cout<<endl;
    sort(p,p+n);
    //sorting is done on basis of first value in array of pair
    for(int i=0;i<n;i++){
        cout<<"("<<p[i].first<<","<<p[i].second<<") ";
    }
    cout<<endl;
    bool wereYouHere[1000]={0}; //false
    int ans=0;
    for(int i=0;i<n;i++){
        //if elem is at correct pos by default
        if(wereYouHere[i]==true ||  p[i].second==i){
            continue; //not do anything
        }
        int noe=0;//no of elem
        int indx=i;
        //restrict visitng again
        while(wereYouHere[indx]==false){
            noe++;
            wereYouHere[indx]=true;
            indx=p[i].second;
        }
        if(noe>1)
        {//if noe is 2 atleast,then only do addition
        //if noe is 1 ,noe-1=0
            ans += noe-1;
            }
        
    }
    cout<<ans<<endl;
   return 0;
}
