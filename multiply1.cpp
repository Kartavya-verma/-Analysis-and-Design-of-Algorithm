#include<iostream>
using namespace std;
int mult(int x,int y){
	int sum=0;
	for(int i=0;i<y;i++){
		sum=sum+x;
	}
	return sum;
}

int main(){
	int a,b,product;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	product=mult(a,b);
	cout<<"Multiplication of "<<a<<"and "<<b<<"="<<product;
	system("pause");
	return 0;
}
