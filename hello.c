#include <stdio.h>
printName(char* name,int add) 
{ 
    printf("%03d : %s\n",add+1,name); 
    add+=2; 
    if(add<5) 
        printName(name,add); 
} 
int main() 
{ 
    
    char name[20];  
    printf("\nEnter a letter :"); 
    scanf("%s",name); 
    printName(name,0); 
     return 0;
}
