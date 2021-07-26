#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
//stdin			Standard input device    	 Keyboard   0
//stdout		Standard output device  	 Monitor    1
//stderr		Standard error device		 Monitor    2
	
using namespace std;

class FileX
{
public:
	int fd;
	
	FileX(char Name[])
	{
		fd = open(Name, O_RDONLY); // for reading from the file
		if(fd == -1)
		{
			cout<<"Unable to open file"<<"\n";
			exit(0);    // this will terminate the program
		}
		else
		{
			cout<<"File successfully opened..\n";
		}
	}
	
	void ReadData(int Size)
	{	
		int ret = 0;
		char *Arr =  new char[Size];
		ret = read(fd,Arr,Size); 
// this will  return a number of byte that can read (possible number of bytes to read)		
		
		printf("%d\n", ret);
		write(1,Arr,ret);
		delete []Arr;
	}  
	~FileX()
	{
		close(fd);
	}	
	
};

int main()
{	int iNo =0;
	char str[30];
	cout<<"Enter File name"<<"\n";
	cin>>str;
	
	FileX obj(str);
	cout<<"Enter number of character you want to read.\n";
	cin>>iNo;
	obj.ReadData(iNo);

	return 0;
}
