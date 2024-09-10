#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number:";
	cin>>num;
	
	string result=(num%3==0)?"divisible by 3":"non divisible by 3";
	cout<<"the number:"<<num<<"is"<<result<<endl;
	return 0;
}
