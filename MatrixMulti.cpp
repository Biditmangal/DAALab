#include <iostream>
#include<cstdlib>
#include <chrono>
using namespace std::chrono;
using namespace std;


int main(){
	int n,num;
	cin>>n;
	int a[n][n],b[n][n],c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			num=rand() % 10000;
			a[i][j]=num;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			num=rand() % 1000;
			b[i][j]=num;
		}
	}
	auto start = high_resolution_clock::now(); 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c[i][j]=0;
			for(int k=0;k<n;k++){
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	auto stop= high_resolution_clock::now();
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << " " << c[i][j];
	        if(j == n -1)
	            cout << endl;
		}
	}
	auto duration= duration_cast<microseconds>(stop-start);
	cout<<endl<<(duration.count())<<endl;
	return 0;
}
