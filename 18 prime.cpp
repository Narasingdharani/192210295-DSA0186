#include<iostream>
using namespace std;
int main()
{
	int num;
	bool isprime=true;
	cout<<"enter the positive integer:";
	cin>>num;
	if(num<=1)
	
	{
		isprime=false;
	}
	else
	{
		for (int i=2;i<=num/ 2;i++)
		{
			if(num%i==0)
			
			{
				isprime=false;
				break;
			}
		}
	} 
	if(isprime)
	{
		cout<<num<<"is  a prime"<<endl;
	}
	else {
		cout<<num<<"it is a not prime"<<endl;
	}
	return 0;
}
