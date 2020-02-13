#include <iostream>
using namespace std;

void swap(int *x,int *y){
	int *temp;
	temp=x;
	x=y;
	y=temp;
}
void intputarray(int *arr,int n){
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void display(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void mergesort(int *arr,int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,)
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	intputarray(arr,n);
	mergesort(arr,n);
	display(arr,n);
	return 0;
}