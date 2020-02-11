#include<iostream>
using namespace std;

int main(){
	int a,b,t;
	cout<<"Enter 2 numbers:";
	cin>>a>>b;

	if(a<b){
		t=a;
		while(b%t){
			t--;
		}
		if(a%t==0)
			cout<<"Greatest Common Divisor :"<<t<<endl;
		else
			cout<<"No greatest common divisor"<<endl;
	}
	else {
		t=b;
		while(a%t){ 
			t--;
		}
		if(b%t==0)
			cout<<"Greatest Common Divisor :"<<t<<endl;
		else
			cout<<"No greatest common divisor"<<endl;
	}
	return 0;
}