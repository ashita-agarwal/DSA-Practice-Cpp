#include <cmath>
#include <iostream>


using namespace std;
int main() {
	int a,b,c,d,r1,r2;
	cin>>a>>b>>c;
	//-100 <= a, b, c <= 100
	if(a,b,c >=-100 && a,b,c <=100)
	{
			d=(b*b)-(4*a*c);
			r1=(-b + sqrt(b*b - 4*a*c))/2*a;
			r2=(-b - sqrt(b*b - 4*a*c))/2*a;
			//If Real and Distinct , print the roots in increasing order.
			if(d>0){
				cout<<"Real and Distinct"<<endl;
				if(r1>r2){
				cout<< r2 <<" "<< r1 ;}
				else{
					cout<< r1 <<" "<< r2 ;
				}
			}
			//If Real and Equal , print the same repeating root twice
			else if(d==0){
				cout<<"Real and Equal"<<endl;
				cout<< r1 <<" "<< r1 ;
			}

			//If Imaginary , no need to print the roots.
			else {
				cout<<"Imaginary"<<endl;
				
	}
			}

	return 0;
}