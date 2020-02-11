#include <iostream>
using namespace std;

int main(){
	int a,b,rem;
	cout<<"Enter 2 Integers: ";
	cin>>a>>b;

	while(b!=0){
		 rem=a%b;
		 a=b;
		 b=rem;
	}
	cout<<"Greatest Common Divisor: "<<a;
	return 0;
}