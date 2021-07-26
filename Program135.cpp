
// File handling system 

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
//O_RDONLY    Read
//O_WRONLY	   write
//O_RDWR		Read & write
// O_CREAT		Create

using namespace std;

class FileX
{
public:
	int fd;
	
	FileX(char Name[])    // it is used to allocate resources rather memory
	{
		fd = open(Name, O_RDONLY);
// when we try to open a file file handling gives us a reference number, that number is stored in fd
//  all operation of file handling will be done by using this number
// If file doesn't exist in the system, -1 will be returned.
 		
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
