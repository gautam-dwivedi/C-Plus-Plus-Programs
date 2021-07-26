
#include<iostream>
using namespace std;
///////////////////////////////incomplete ...............
class StringX
{
public:
	
	int iNo;
	
	void Accept()
	{
		cout<<"Enter Number"<<"\n";
		cin>>iNo;   
	}
	void Pattern()
	{	int iCnt =0, iDigit = 0;
		int iValue =iNo;

		while(iValue>0)
		{	
			iCnt++;
			iValue = iValue/10;
		}
		iValue = iNo;
		for(i = iCnt; i>0; i--)
		{
			for (j = 0; j<i; j++)
			{
				iDigit = iValue%10;
				cout<<iDigit<<"\t";
				iValue = iValue/10;
			}
			cout<<"\n";
			iValue = iNo;	
		}
	}
};


int main()
{	
	
	StringX obj;
	obj.Accept();
	
	obj.Pattern();

	return 0;
}