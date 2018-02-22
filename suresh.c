#include<stdio.h>

void main() 
{
   int x,y,a;
   int s=0;
 scanf("%d",&x);
 y=x;
 while(x!=0)
 {
     a=x%10;
     s=a*a*a+s;
     x=x/10;
 }
 if(s==y)
 printf("armstrong");
 else
 printf("no");
}
 
