#include<stdio.h>
void aiml()
{
int var=25;
int *pt;
pt=&var;
printf("Address is :%p\n",pt);
printf("value is :%d\n",*pt);
}
int main()
{
aiml();
return 0;
}

