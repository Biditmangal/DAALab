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
void bubblesort(int *arr,int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(arr[j+1]<arr[j])
				swap(arr[j],arr[j+1]);
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	intputarray(arr,n);
	bubblesort(arr,n);
	display(arr,n);
	return 0;
}