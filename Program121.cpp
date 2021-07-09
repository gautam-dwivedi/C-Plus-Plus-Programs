
#include<iostream>  

using namespace std;

class Arithmatic
{
public:  
	int ino1,ino2;   // characteristics
	
	void Accept()  // method used to accept two num from user // called "Behavior" or functions
	{			  // can be written inside main also
	cout <<"Enter first number\n";
	cin>>ino1;
	
	cout <<"Enter second number\n";
	cin>>ino2;
	}
	
	int Addition()  //Behaviour
	{
	int iResult =0;
	iResult = ino1 + ino2;
	return iResult;
	} 
	
	int Subtraction() //Behaviour
	{
	int iResult =0;
	iResult = ino1 - ino2;
	return iResult;
	} 
};         // at the end of the class there should be a semicolon indicating end of the class #Rule C++


int main()
{
	int iRet1 =0, iRet2 =0;
	Arithmatic obj1;  // object creation
	Arithmatic obj2;
	
	obj1.Accept();  
	iRet1 = obj1.Addition();
	cout<< "Addition is:"<<iRet1<<"\n";
	
	obj2.Accept();
	iRet2 = obj2.Subtraction();
	cout<< "Subtraction is:"<<iRet2<<"\n";
	
	return 0;	
}


















