#include<iostream>
using namespace std;

void merge(int a[],int f,int m,int l){
	int n1,n2,i,j,k;
	n1=m-f+1;
	n2=l-m;
	int le[n1+1],r[n2+1];
	for(i=0;i<n1;i++){
		le[i]=a[f+i];
	}
	le[i]=INT_MAX;
	for(j=0;j<n2;j++){
		r[j]=a[j+m+1];
	}
	r[j]=INT_MAX;
	i=0,j=0;
	for(k=f;k<=l;k++){
		if(le[i]<=r[j]){
			a[k]=le[i];
			i++;
		}
		else{
			a[k]=r[j];
			j++;
		}
	}
}

void mergesort(int a[],int f,int l){
	if(f<l){
		int m=(f+l)/2;
		mergesort(a,f,m);
		mergesort(a,m+1,l);
		merge(a,f,m,l);
	}
}

int main(){
	int n;
	cout<<"Enter size ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	mergesort(a,0,n-1);
	cout<<"Sorted array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
