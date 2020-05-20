#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,c=0,ele;
	cout<<"Enter the sizer of array:";
	cin>>size;	
	int arr[size];
		for(int i=0;i<size;i++){
		cin>>arr[i];
		}
	cout<<"Enter the element you want to search:";
	cin>>ele;
	for(int i=0;i<size;i++){
		if(arr[i]==ele){
			cout<<"Element is at "<<i+1<<" position"<<endl;
			c++;
		}
	}
	if(c==0){
		cout<<"Element not found!!!";
	}
	
	return 0;
}
