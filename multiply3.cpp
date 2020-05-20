#include<iostream>
using namespace std;
int mult(int x,int y){
	if(y==1)
		return x;
	int t=mult(x,y/2);
	t+=t;
	if(y%2!=0){
		t=t+x;
	}
	return t;
}

int main(){
	int a,b,product;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	if(a==0 || b==0)
		cout<<"0";
	else if(a==1)
		cout<<b;
	else if(b==1)
		cout<<a;
	else{
		product=mult(a,b);
		cout<<"Multiplication of "<<a<<"and "<<b<<"="<<product;
	}
	system("pause");
	return 0;
}
