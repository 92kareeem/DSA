//Example of pointer demonstrating the use of & and *-
#include<stdio.h>
int main()
{
int *p;
int var=10;
p=&var;
printf("Value of variable var is :%d",var);
printf("\n value of variable var is :%d",*p);
printf("\n address of variable var is :%p",&var);
printf("\n address of pointer p is :%p",&p);
return 0;
}

