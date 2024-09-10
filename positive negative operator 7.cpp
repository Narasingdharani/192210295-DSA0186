#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the integer:";
	cin>>num;
	
	if(num>0){
		cout<<num<<"the number is positive:"<<endl;
	}else if(num<0){
		cout<<num<<"the number is negative:"<<endl;
	}else if(num=0){
		cout<<num<<"the number is zero:"<<endl;
	}
	return 0;
}
