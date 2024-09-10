#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"enterfirst  number:";
	cin>>num1;
	cout<<"enter second number:";
	cin>>num2;
	
	if(num1>num2){
		cout<<num1<<"the greater than:"<<num2<<endl;
	}else if(num2>num1){
		cout<<num2<<"the greater than:"<<num1<<endl;
	}else{
		cout<<"both numbers are equal:"<<endl;
	}
	return 0;
}
