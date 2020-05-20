#include<bits/stdc++.h>
using namespace std;

int main(){
	int x,y;
	cout<<"Enter the base value:";
	cin>>x;
	cout<<"Enter the power value:";
	cin>>y;
	int fac=1;
	for(int i=0;i<y;i++){
		fac=fac*x;
	}
	cout<<x<<" to the power of "<<y<<" is "<<fac;
	return 0;
}
