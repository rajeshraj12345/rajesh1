#include<stdio.h>
 main()
{
int original,reverse=0,n,rem;
scanf("%d",&n);
original=n;
while(n!=0)
{
	rem=n%10;
	reverse=reverse*10+rem;
	n=n/10;
}
if(original==reverse)
printf("\nPalindrome");
else
printf("\nNot Palindrome");

} 
