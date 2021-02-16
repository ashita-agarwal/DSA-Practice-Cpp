#include<iostream>
#include<cmath>

using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int c1,c2,c3,c4;
		cin>>c1>>c2>>c3>>c4; //costs
		int n,m;
		cin>>n>>m;//no of times rickshaw or cab gng to b used
		int r[n]={}; //n times he will use rickshaw i
		int c[m]={}; //m times he will use cab i
		for(int i=0;i<n;i++){
			cin>>r[i];
		}
		for(int i=0;i<m;i++){
			cin>>c[i];
		}
		int tot_r,tot_c,sr=0,sc=0; //total rickshaw cost and cab cost
		for(int i=0;i<n;i++){
			sr=sr+min(r[i]*c1,c2);
			
		}

		tot_r=min(sr,c3);

		for(int i=0;i<m;i++){
			sc=sc+min(c[i]*c1,c2);
		}
		tot_c=min( sc,c3);
		int tot_cost;
		tot_cost=min((tot_c+tot_r),c4);
		cout<<tot_cost<<endl;
	}
	return 0;
}