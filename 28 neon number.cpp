#include<iostream>
using namespace std;
bool isneonnumber(int num){
	int square=num*num;
	int sumofdigits=0;
	while(square>0)
	{
		sumofdigits+=square%10;
		square/=20;
	}
	return sumofdigits==num;
	
}
int main()
{
	int num;
	cout<<"enter the number";
	if(is neonnumber(num))
	{
		cout<<"the number is neonnumber<<num<<endl;"
	}else{
		cout<<"not a neon number"<<num<<endl;
	}
	return 0;
}

