#include<iostream>
using namespace std;
int main()
{
    int num, originalNum, Sumofdigits=0;
    cout<<"Enter an number: ";
    cin>>num;
    originalNum =num;
    while(originalNum != 0)
    {
        Sumofdigits += originalNum % 10;
        originalNum /= 10;
    }
    if(num % Sumofdigits == 0)
    {
        cout<<num<<"is an harshad number. "<<endl;
    }
    else
    {
        cout<<num<<"is not an harshad number."<<endl;
    }
    return 0;
}
