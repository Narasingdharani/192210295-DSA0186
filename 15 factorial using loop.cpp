#include<iostream>
using namespace std;
int main(){
	int num;
	int factorial=1;
	cout<<"enter the number:";
	cin>>num;
	for(int i=1;i<=num;++i)
	{
		factorial*=i;
	}
	cout<<"the factorial of"<<num<<"="<<factorial<<endl;
	
	return 0;
}
