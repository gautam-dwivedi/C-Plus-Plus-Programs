

int Addition(int brr[] ,int no)
{	int i = 0, add=0;

	for(i=1; i<=no; i++)
	{
		add =  add + brr[i];
	}
	return add;
}




int main()
{
	int *arr = NULL;
	int no1 =0, i =0, iRet=0;
	
	printf("Enter total size");
	scanf("%d", &no1);
	

	
	for (i=1; i<=no1; i++)
	{
		printf("enter number:");
		scanf("%d",&arr[i]);
	}
	
	iRet = Addition(arr,no1);
	printf("Addition is: %d",iRet)
	
}