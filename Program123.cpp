// Using CONSTRUCTOR concept here  

#include<iostream>  

using namespace std;

class Arithmatic
{
public:  				// Access specifier
	int ino1,ino2;   
	Arithmatic(int x, int y) // Constructor   
	{
		ino1 = x;    // Dont take user input here // Bad programming practice
		ino2 = y;
	}
	//As soon as  the Object is  created, its constructor is created
	
	int Addition()  
	{
	int iResult =0;
	iResult = ino1 + ino2;
	return iResult;
	} 
	
	int Subtraction() 
	{
	int iResult =0;
	iResult = ino1 - ino2;
	return iResult;
	} 
};        


int main()
{
	int iRet1 =0, iRet2 =0;
	int ino1 =0, ino2 =0;
	
	cout <<"Enter first number"<<"\n";   		// taking user inputs here
	cin>>ino1;
	
	cout <<"Enter second number"<<"\n";
	cin>>ino2;
	
	Arithmatic obj1(ino1, ino2);    

	cout <<"Enter first number"<<"\n";  		// taking user inputs here
	cin>>ino1;
	
	cout <<"Enter second number"<<"\n";
	cin>>ino2;

	Arithmatic obj2(ino1, ino2);
	
	iRet1 = obj1.Addition();
	cout<< "Addition is:"<<iRet1<<"\n";
	
	iRet2 = obj2.Subtraction();
	cout<< "Subtraction is:"<<iRet2<<"\n";
	
	return 0;	
}


















