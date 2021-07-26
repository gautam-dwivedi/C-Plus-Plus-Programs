#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>
//O_RDONLY    Read
//O_WRONLY	  Write
//O_RDWR	  Read & write

using namespace std;

class FileX
{
public:
	int fd;     
	
	FileX(char Name[])
	{
		fd = creat(Name,0777);// 0 is given because of octal number (octal 0 to 7)   // To create file
		if(fd == -1)			// 777 is the input... Refer program137.png image
		{
			cout<<"Unable to create file"<<"\n";
		}
		else
		{
			cout<<"File successfully created..\n";
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
