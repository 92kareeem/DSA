//changing the value in c pointers
#include<stdio.h>
int main()
{
int val=10;
int *point;
point=&val;
val=9;
printf("DSA Tutorial : Changing the value pointed by a pointer \n");
printf("Value is :%d \n ",*point);
printf("Memory address is ;%p\n",point);
}

