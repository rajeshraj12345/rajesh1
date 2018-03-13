#include <stdio.h>
int main()
{
long int N,a[100000];
long int i,temp;
scanf("%ld",&N);
for(i=0;i<N;i++)
{
	scanf("%d",&a[i]);
	temp=a[0];
}
for(i=0;i<N;i++)
{
	if(a[i]>a[0])
	temp=a[i];
}
printf("%d",temp);
return 0;

}
