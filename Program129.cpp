
#include<iostream>
using namespace std;

class StringX
{
public:
	
	char str[30];
	
	void Accept()
	{
		cout<<"Enter String"<<"\n";
		scanf("%[^'\n']s",str);    
	}
	void Pattern()
	{
		
		char *ptr = str;
		char *s = str;
		int i = 0;
		while(*ptr != '\0')
		{	
			while(*(s+i) != '\0')
			{
				cout<<*s<<"\t";
				s++;
			}
			s = str;
			ptr++;
			i++
			cout<<"\n";
		}	
	}
};


int main()
{	
	
	StringX obj;
	obj.Accept();
	
	obj.Pattern();

	return 0;
}