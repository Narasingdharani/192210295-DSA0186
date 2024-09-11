#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"enter number of rows:";
	cin>>rows;
	for(int i=0;i<rows;i++){
	
		for(int j=0;j<=i;j++)
		{
			cout<<" "<<(i==0||j==0||j==i?1:(i-1)*(j-1)/j);
		}
	cout<<endl;
   }
	return 0;
}
