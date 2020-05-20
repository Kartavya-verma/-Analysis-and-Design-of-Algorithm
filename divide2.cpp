#include<iostream>
using namespace std;
int count=0;
int divide(int x,int y){
	if(x==0)
		return count;
	count++;
	return(divide(x-y,y));
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
