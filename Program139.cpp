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
		char Arr[20];
		read(fd,Arr,10);
		write(fd,Arr,10);	//("%s",Arr);
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
	obj.ReadData();

	return 0;
}
