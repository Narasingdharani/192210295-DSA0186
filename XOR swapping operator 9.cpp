#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter two integers:";
	cin>>a>>b;
	cout<<"\nbefore swapping A:"<<a<<"B:"<<b;
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<"\nafter swapping B:"<<a<<"B:"<<b;
	
	
}
