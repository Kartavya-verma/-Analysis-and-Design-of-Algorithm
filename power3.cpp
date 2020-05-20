#include<bits/stdc++.h>
using namespace std;

int pow(int x,int y){
	if(y==1)
		return x;
	int t=pow(x,y/2);
	t=t*t;
	if(y%2==1)
		t=t*x;
	return t;
}

int main(){
	int x,y,p;
	cout<<"Enter the base value:";
	cin>>x;
	cout<<"Enter the power value:";
	cin>>y;
	p=pow(x,y);
	cout<<x<<" to the power of "<<y<<" is "<<p;
	return 0;
}
