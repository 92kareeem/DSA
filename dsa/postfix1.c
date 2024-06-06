#include <stdio.h>
#include<ctype.h> 
int stack[20];top=-1;
void push(int);
int pop();
int main()
{
char exp[20];
char *e;
int n1,n2,n3,n;
printf("Enter the postfix experession:");
scanf("%s",exp);
    e=exp;
while(*e!='\0')
    {
if(isdigit(*e))
        {
            n= *e-48;
push(n);
        }
else
        {
            n1=pop();
            n2=pop();
switch(*e)
            {
case '+':n3=n1+n2;
break;
case '-':n3=n1-n2;
break;
case '*':n3=n1*n2;
break;
case '/':n3=n1/n2;
break;
            }
push(n3);
        }
e++;
    }
printf("\nThe result of the experession %s is %d",exp,pop());
}
void push(int x)
{
stack[++top]=x;
}
int pop()
{
return stack[top--];
}

