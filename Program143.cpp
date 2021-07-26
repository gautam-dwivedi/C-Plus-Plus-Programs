// read 10 bites again and again till there is nothing to read

// FILE TO DISPLAY ALL ITS CONTENT ON COMMAND PROMPT

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>

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
		}
		else
		{
			cout<<"File successfully opened..\n";
		}
	}
	
	void ReadData()
	{	
		char Arr[10];
		int ret =0;
		
		while((ret = read(fd,Arr,10))!=0)
		{
			write(1,Arr,ret);	 // 1 means monitor
		}
	}  
	~FileX()
	{
		close(fd);
	}	
	
};

// FILE TO DISPLAY ALL ITS CONTENT ON COMMAND PROMPT  
// while entering file name.............. .................. ENTER "PROGRAM143.CPP"       // NOTE

int main()
{	
	char str[30];
	cout<<"Enter File name"<<"\n";
	cin>>str;
	
	FileX obj(str);
	obj.ReadData();

	return 0;
}
