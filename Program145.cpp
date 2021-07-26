

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
		fd = open(Name, O_WRONLY | O_APPEND);    // Changes here O_APPEND
		if(fd == -1)
		{
			cout<<"Unable to open file"<<"\n";
		}
		else
		{
			cout<<"File successfully updated..\n";
		}
	}
	
	
	~FileX()
	{
		close(fd);
	}	
	void WriteData()
	{	
		char str[] = "Pune";   // To write "Pune" at the end of all text in the file
		write(fd,str,4);
	}  
	
};



int main()
{	
	char str[30];
	cout<<"Enter File name"<<"\n";
	cin>>str;
	
	FileX obj(str);
	obj.WriteData();

	return 0;
}
