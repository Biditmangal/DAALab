#include <iostream>
using namespace std;

void inputarray(int *arr,int n){
	cout<<"Enter a sorted Array"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}

int binarysearch(int *arr,int left,int right,int k){
	int middle;
	while(left<=right){
		middle=left+(right-left)/2;
		if(arr[middle]==k)
			return middle;
		else if(k<arr[middle])
			right=middle-1;
		else
			left=middle+1;
	}
	return -1;
}
int main(){
	int *arr,n;
	cin>>n;
	arr = new int [n];
	inputarray(arr,n);

	cout<<"Enter the element to be searched"<<endl;
	int k ,m;
	cin>>k;

	m=binarysearch(arr,0,n,k);

	if(m==-1)
		cout<<"Element was not found!"<<endl;
	else
		cout<<"Element is located at "<<m+1<<" location"<<endl;

	return 0;
}