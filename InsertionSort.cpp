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
void insertionsort(int *arr,int n){
	int key,i;
	for(int j=1;j<n;j++){
		key=arr[j];
		i=j-1;
		while(i>=0 && arr[i]>key){
			arr[i+1]=arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	intputarray(arr,n);
	insertionsort(arr,n);
	display(arr,n);
	return 0;
}