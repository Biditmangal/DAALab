#include <iostream>
#include <chrono>
#include <cstdlib>
using namespace std::chrono;
using namespace std;

int main(){
	int size;
	cin>>size;
	int arr[size],flag=0,first;
	for(int i=0;i<size;i++){
		arr[i]=rand()%1000;
	}
	auto start = high_resolution_clock::now();
	for(int i=0;i<size;i++){
		first=arr[i];
		for(int j=i;j<size;j++){
			if(first==arr[j]){
				flag=1;
				break;			
			}
		}	
	}
	auto stop = high_resolution_clock::now();
	auto duration= duration_cast<microseconds>(stop-start);
	cout<<endl<<(duration.count())<<" microseconds"<<endl;
	
	if(flag==1)
		cout<<"Not Unique"<<endl;
	else
		cout<<"Unique"<<endl;
	return 0;
}	
