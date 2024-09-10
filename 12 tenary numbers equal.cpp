#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the number:";
	cin>>a>>b;
	
	string result=(a==b)?"equal":"not equal";
	cout<<"the numbers are:"<<result<<endl;
}
