#include<stdio.h>
int main()
{
	int num=2;
	if(num<10 && num==2)
	{
		if(num==1)
		{
			printf("The value is:%d\n",num);
		}
		else if(num==2 || num==5)
		{
			printf("The value is greater than 1");
		}
	}
	else
	{
		printf("The value is greater than 10");
	}
	return 0;
}