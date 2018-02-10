#include<stdio.h>
int  main()
{
  int a[3],*p,i;
  p=a;
  printf("enter the value:");
  scanf("%d\n",&a[i]);
  for(i=0;i<2;i++)
  {
      scanf("%d\n",&a[i]);
      ++p;
  }
  for(i=0;i<2;i++)
 {
     printf("%u\n",p);
 }
  return 0;
}
