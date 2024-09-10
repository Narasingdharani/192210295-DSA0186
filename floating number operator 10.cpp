#include<iostream>
using namespace std;
int main()
{
	double num;
	cout<<"enter floating number:";
	cin>>num;
	cout<<"the number rounded down using floor():"<<floor(num)<<endl;
	cout<<"the number rounded up using ceil():"<<ceil(num)<<endl;
	return 0;
}
