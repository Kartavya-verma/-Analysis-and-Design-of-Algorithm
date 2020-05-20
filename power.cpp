#include<iostream>
using namespace std;
int pow(int x,int y){
	int sum=1;
	for(int i=0;i<y;i++){
		sum=sum*x;
	}
	return sum;
}

int main(){
	int a,b,power;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	power=pow(a,b);
	cout<<"Power of "<<a<<"and "<<b<<"="<<power;
	system("pause");
	return 0;
}
