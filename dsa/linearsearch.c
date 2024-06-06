#include<stdio.h>
main()
{
int a[20],n,i,j,t;
printf("input array size");
scanf("%d",&n);
printf("\n enter array elements:");
for(i=0;i<=(n-1);i++)
scanf("%d",&a[i]);
printf("\n Unsorted list elements..");
for(i=0;i<=(n-1);i++)
printf("%d\t",a[i]);
for(i=0;i<=(n-1);i++)
{
for(j=0;j<=(n-2);j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("\n sorted list elements:");
for(i=0;i<=(n-1);i++)
printf("%d\t",a[i]);
}

