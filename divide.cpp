#include<iostream>
using namespace std;
int divide(int x,int y){
	int count=0;
	int sub=0;
	for(int i=0;i<x;i++){
		x=x-y;
		count++;
	}
	return count;
}

int main(){
	int a,b,result;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	if(b==0)
		cout<<"Division is not possible";
	else{
		result=divide(a,b);
		cout<<"Division of "<<a<<"and "<<b<<"="<<result;
	}
	system("pause");
	return 0;
}
