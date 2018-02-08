#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c=0;
    clrscr ();
    int array [5];
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    printf("enter the number of array:");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&array [i]);
    }
    for(i=0;i<b;i++)
    {
        c+=array [i];
    }
    printf("sum of integer=%d",c);
    getch ();
