// Without object orientation C++ program  // Procedural approach

#include<iostream>  // input output stream

using namespace std;

int Addition(int no1, int no2)
{
	int iResult =0;
	iResult = no1 + no2;
	return iResult;	
}

int main()
{
	int iValue1 =0, iValue2 =0, iRet=0;
	
	cout <<"Enter first number\n";
	cin>>iValue1;
	
	cout <<"Enter second number\n";
	cin>>iValue2;
	
	iRet = Addition(iValue1,iValue2);
	
	cout<< "Addition is:"<<iRet<<"\n";
	return 0;
}