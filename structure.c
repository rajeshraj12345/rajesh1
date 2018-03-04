#include<stdio.h>
struct stud 
{
    int id;
    char name[10];
    int m1,m2,m3;
    int total;
    int avg;
} ;
int main()
{
    struct stud s;
    printf("\nenter the student details");
    scanf("%d %s %d %d %d",&s.id,s.name,&s.m1,&s.m2,&s.m3,&s.total,&s.avg);
    s.total=s.m1+s.m2+s.m3;
    s.avg=(s.total/3);
    printf("%d%s%d%d%d",s.id,s.name,s.m1,s.m2,s.m3,s.total,s.avg);
    return 0;
}
