#include<bits/stdc++.h>
using namespace std;
int main(){
	int size,ele;
	cout<<"Enter the size of array:";
	cin>>size;	
	int arr[size];
		for(int i=0;i<size;i++){
		cin>>arr[i];
		}
	cout<<"Enter the element you want to search:";
	cin>>ele;
	
	int ui=size-1,li,mid;
	while(li<=ui){
		mid=(li+ui)/2;
		if(arr[mid]==ele){
			cout<<"Element found at "<<mid+1<<" position";
			break;
		}
		else if(arr[mid]<ele)
			li=mid+1;
		else if(arr[mid]>ele)
			ui=mid-1;
		else
			cout<<"Element not found !!!";
	}
	return 0;
}
