#include<bits/stdc++.h>
using namespace std;

int n=4,count1=0;  
int x[5]={0};

int chk(){   for (int i=1;i<=n;i++)
	{if(x[i]!=0) return 0;}
	return 1;
}

void write(int x[]){ 
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	} 
}

int isattackcol(int c){   
	for(int temp=1;temp<=n;temp++){
		if(x[temp]==c)return 1;
	}
	return 0;
}

int isattackdiag(int r, int c){   
	for(int temp=1;temp<=n;temp++){  
		if(x[temp]!=0){  
			if(abs(temp-r)==abs(x[temp]-c)){
				return 1;
			}
		}
	}
	return 0;
}

void  nqueen(int r){ 
	int c=1;
	while(c<=n){   
		int chk1=isattackcol(c);
		int chk2=isattackdiag(r,c);
		if(chk1==0 && chk2==0){
			x[r]=c;
			if(r==n){
				cout<<"\n Output \n"; 
				count1++ ; 
				write(x);
			}
		     else{
			 	nqueen(r+1);
			 }
		}
		c++;
	}
	x[r]=0;
	cout<<"\nintermediate solution\n"; write(x);
	if(chk()==1) {
		cout<<"\nNo more outputs"; 
		cout<<"\nTotal Solutions: "<<count1;
		exit(-1);
	}
}

int main(){ 
	nqueen(1);
	return 0;
}
