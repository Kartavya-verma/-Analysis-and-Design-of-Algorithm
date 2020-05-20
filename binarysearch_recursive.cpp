#include<bits/stdc++.h>
using namespace std;
int binary(int arr[],int li,int ui,int ele){
	if(li<=ui){
		int mid=li+(ui-1)/2;
		if(arr[mid]==ele)
			return mid;
		if(arr[mid]>ele)
			return binary(arr,li,mid-1,ele);
		return binary(arr,mid+1,ui,ele);
	}
	return -1;
}

int main(){
	int size,ele,pos;
	cout<<"Enter the size of array:";
	cin>>size;	
	int arr[size];
		for(int i=0;i<size;i++){
		cin>>arr[i];
		}
	cout<<"Enter the element you want to search:";
	cin>>ele;
	pos=binary(arr,0,size-1,ele);
	if (pos==-1){
        cout<<"Element not found ";
    }
    else{
        cout<<"Element found at position "<<pos+1;
    }
	return 0;
}
