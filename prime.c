#include<stdio.h>
 main()
{
	int num,count=0,i;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime");
	}
	else
	{
		printf("not a prime");
	}
}
