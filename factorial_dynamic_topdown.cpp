#include<iostream>
using namespace std;
int size=50;
int F[50];

void init_result(){
	for(int i=0;i<size;i++){
		F[i]=-1;
	}
}

int fact(int n){
	if(F[n]==-1){
		if(n==0)
			F[0]=1;
		else
			F[n]=n*fact(n-1);
	}
	return (F[n]);
}

int main(){
	int n;
	cout<<"Enter integer to compute factorial:";
	cin>>n;
	init_result();
	cout<<"Factorial is: "<<fact(n);	
	return 0;
}
