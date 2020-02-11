#include <iostream>
#include <cstdlib>
#include<chrono>
using namespace std::chrono;
using namespace std;

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		arr[i]=rand()%1000;
	} 
	int first = arr[0];

	auto start = high_resolution_clock::now();
	for(int i=0;i<size;i++){
		if(first<arr[i])
			first=arr[i];
	}
	auto stop= high_resolution_clock::now();
	auto duration= duration_cast<microseconds>(stop-start);
	cout<<endl<<(duration.count())<<" microseconds"<<endl;
	
	cout<<"Max value is "<< first<<endl;
	return 0;
}