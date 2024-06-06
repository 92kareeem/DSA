#include<stdio.h>
#include<stdlib.h>
void insert(int);
void delete();
struct node
{
int data;
struct node*next;
};
struct node*head;
int main()
{
int choice,item;
do
{
printf("\n1.insert list\n2,delete node\n3,exit\n4.Enter your choice");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\n Enter the item");
scanf("%d",&item);
create(item);
break;
case 2:
delete();
break;
case 3:
exit(0);
break;
default:
printf("\n Please enter valid choice\n");
}
}
while(choice!=3):
}
void create(int item)
{
struct node*ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\n OVERFLOW\n");
}
else
{
ptr->data=item;
ptr->next=head;
head=ptr;
printf("\n node inserted");
}
}
void delete()
{
struct node*ptr;
if(head==NULL)
{
printf("\n List is empty");
}
else
{
ptr=head
head=ptr->next;
free(ptr);
printf("\n node is deleted from the beginning");
}
}



