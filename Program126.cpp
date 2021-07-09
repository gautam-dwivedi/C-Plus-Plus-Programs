
#include<iostream>
using namespace std;

int Addition(int Arr[] ,int iSize)
{	int i = 0, add=0;

	for(i=1; i<=iSize; i++)
	{
		add =  add + Arr[i];
	}
	return add;
}

int main()
{
	int *Arr = NULL;
	int iSize =0, i =0, iRet=0;
	
	cout<<"Enter number of elements\n";
	cin>> iSize;
	
	// Dynamic memory alocation to pointer below
	Arr = new int[iSize];  // Arr = (int *)malloc(iSize * sizeof(int))
	for (i=1; i<=iSize; i++)
	{
		cin>>Arr[i];
	}
	iRet = Addition(Arr,iSize);
	
	cout<<"Addition is:"<<iRet;
	delete []Arr;   //free(arr)	

	return 0;
}