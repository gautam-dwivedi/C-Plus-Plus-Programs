// With object orientation C++ program
#include<iostream>  

using namespace std;

class Arithmatic
{
public:  // everyone can access such variables // Called access specifier 
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
	int iRet =0;
	Arithmatic obj;  // object creation
	
	obj.Accept();  // this method is used for taking inputs  
	iRet = obj.Addition();
	cout<< "Addition is:"<<iRet<<"\n";
	
	iRet = obj.Subtraction();
	cout<< "Subtraction is:"<<iRet<<"\n";
	
	return 0;	
}


















