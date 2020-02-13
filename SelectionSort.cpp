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
void selectionsort(int *arr,int n){
	int min=0;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min])
				min=j;
		}
		swap(arr[i],arr[min]);
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	intputarray(arr,n);
	selectionsort(arr,n);
	display(arr,n);
	return 0;
}