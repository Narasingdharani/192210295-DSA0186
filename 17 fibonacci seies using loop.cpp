#include<iostream>
using namespace std;
int main(){
	int n,t1=0,t2=1,nextterm=0;
	cout<<"enter the number of terms:";
	cin>>n;
	for(int i=1;i<=n-2;i++)
	{
		nextterm=t1+t2;
		cout<<","<<nextterm;
		t1=t2;
		t2=nextterm;
	}
	cout<<endl;
	return 0;
}
