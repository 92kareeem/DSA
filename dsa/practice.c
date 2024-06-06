#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};
struct node*head,*tail=NULL;
void insertion(int data)
{
struct node*newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
if(head==NULL)
{
head=newnode;
tail=newnode;
}
else
{
tail->next=newnode;
tail=newnode;
}
}
void deletion(int data)
{
struct node*ptr;
if(head==NULL)
{
printf("\n list is empty");
}
else
{
ptr=head;
head=ptr->next;
free(ptr);
printf("node deleting from beginning"); 
}
}
void display()
{
struct node*current=head;
if(head==NULL)
{
printf("list is empty");
return;
}
printf("nodes of single linked list\n");
while(current!=NULL)
{
printf("%d\n",current->data);
current=current->next;
}
printf("\n");
}
int main()
{
insertion(3);
insertion(6);
insertion(89);
deletion(3);
display();
return 0;
}

