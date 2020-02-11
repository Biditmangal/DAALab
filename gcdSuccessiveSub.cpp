#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Input 2 numbers: ";
	cin>>a>>b;
	if(a>b){
		while ((a-b)>0){
			a=a-b;
			if(a==b)
				break;
		}	
		while ((b-a)>0){
			b=b-a;
			if(b==a)
				break;
		}
	}
	else{
		while ((b-a)>0){
			b=b-a;
			if(b==a)
				break;
		}
		while ((a-b)>0){
			a=a-b;
			if(a==b)
				break;
		}
	}
	cout<<"Greatest Common Divisor : "<< a <<endl;
	return 0;
}