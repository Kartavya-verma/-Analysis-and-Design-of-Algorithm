#include <iostream>
using namespace std;

int F[1000]={0};
int fact(int n){
    F[0]=1;
    for (int i=1;i<=n;++i) {
        F[i]=i*F[i-1];
    }
    return F[n];
}

int main() {
    int n;
	cout<<"Enter integer to compute factorial:";
	cin>>n;
	cout<<"Factorial is: "<<fact(n);	
    return 0;
}
