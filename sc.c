#include<stdio.h>
 main()
{
int a,b,i;
scanf("%d %d",&a,&b);
for(i=a,i<=b,i++)
{
if((i%2!=0)&&(i%3!=0))
{
printf("%d",i);
}
    
}
