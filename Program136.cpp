#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
//O_RDONLY    Read
//O_WRONLY	   write
//O_RDWR	  Read & write

using namespace std;

class FileX
{
public:
	int fd;
	
	FileX(char Name[])
	{
		fd = open(Name, O_WRONLY | O_CREAT);  // open or create a file if not available
		if(fd == -1)
		{
			cout<<"Unable to open file"<<"\n";
		}
		else
		{
			cout<<"File successfully opened..\n";
		}
	}
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

	return 0;
}
