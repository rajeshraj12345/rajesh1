#include<stdio.h>
int main()
{
int digit,rev=0,i,n;
printf("enter n value");
scanf("%d",&n);
for(i=122;i<n;i++)
{
while(n!=0)
digit=i%10;
rev=rev*digit*digit*digit;
i=i/10;
}
if(i==rev)
{
printf("numbers are %d",rev);
}
}
