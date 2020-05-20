#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int i,int heapsize){
	int largest=i;
	int left=2*i+1;
	int right=2*i+2;
	if(left<=heapsize && arr[left]>arr[largest])
		largest=left;
	if(right<=heapsize && arr[right]>arr[largest])
		largest=right;
	if(i!=largest){
		swap(arr[largest],arr[i]);
		heapify(arr,largest,heapsize);
	}
}

void buildheap(int arr[],int n,int heapsize){
	for(int i=(n/2)-1;i>=0;i--)
		heapify(arr,i,heapsize);
}

void heapsort(int arr[],int &n){
	int heapsize=n-1;
	buildheap(arr,n,heapsize);
	while(heapsize>=1){
		swap(arr[0],arr[heapsize]);
		heapsize--;
		heapify(arr,0,heapsize);
	}
}

int main(){
	int n;
	cout<<"Enter the size of array: "<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	heapsort(arr,n);
	cout<<"Sorted array is: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
