#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
//stdin			Standard input device    	 Keyboard   0
//stdout		Standard output device  	 Monitor    1  // for printing output on monitor
//stderr		Standard error device		 Monitor    2  // Monitor for displaying error
	
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
		char Arr[20];
		read(fd,Arr,10);
		write(1,Arr,10);    // printf("%s",Arr);
		// This function will do what printf fuction does internally
		// 1 is assigned number to monitor	
	}  // writing 1 here is for stdout mentioned above   in line 7
	
	
	~FileX()
	{
		close(fd);
	}	
	
};

int main()
{
	char str[30];
	cout<<"Enter File name"<<"\n";
	cin>>str;
	
	FileX obj(str);
	obj.ReadData();

	return 0;
}
