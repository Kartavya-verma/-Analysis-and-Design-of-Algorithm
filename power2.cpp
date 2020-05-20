#include<bits/stdc++.h>
using namespace std;

int pow(int x,int y,int fac){
	if(y!=0)
		pow(x,y-1,fac*x);
	else
		return fac;
}

int main(){
	int x,y,p;
	cout<<"Enter the base value:";
	cin>>x;
	cout<<"Enter the power value:";
	cin>>y;
	p=pow(x,y,1);
	cout<<x<<" to the power of "<<y<<" is "<<p;
	return 0;
}
