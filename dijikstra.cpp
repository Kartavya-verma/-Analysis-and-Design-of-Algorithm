#include<iostream>
using namespace std;
int size=50;
int F[50];

void init_result(){
	for(int i=0;i<size;i++){
		F[i]=-1;
	}
}
 
int fib(int n){
    if(F[n]==-1){
    	if(n<=1)
    		F[n]=n;
    	else
    		F[n]=fib(n-1)+fib(n-2);
	}
    return F[n];
}
 
int main(){
    int n;
    cout<<"Enter the value upto which you want the series:"<<endl;
    cin>>n;
    init_result();
    cout<<"Required fibonacci series is:"<<fib(n);;
    return 0;
}
