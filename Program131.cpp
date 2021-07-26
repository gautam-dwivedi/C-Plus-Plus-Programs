
#include<iostream>
using namespace std;

class StringX
{
public:
	
	int iNo, temp =0;
	
	void Accept()
	{
		cout<<"Enter Number"<<"\n";
		cin>>iNo;   
	}
	void Pattern()
	{	int iDigit =0, temp = 0;
		int iValue =iNo;

		while(iValue>0)
		{	
			temp = iValue;
			while(temp>0)
			{
				iDigit = temp%10;
				cout<<iDigit<<"\t";
				temp = temp/10;
			}
			cout<<"\n";
			iValue = iValue/10;	
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