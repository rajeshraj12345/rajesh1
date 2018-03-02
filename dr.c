#include <stdio.h>

 main(void) {
	int n,a,d,i,s;
	scanf("%d%d%d",&n,&a,&d);
		s=0;
		
	for(i=1;i<=a;i++)
	{
	
		
		printf("%d\t",n);
		s=s+n;
		n=n+d;
	}
	printf("\n");
	printf("%d\t",s);
           
	
}
