#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *newnode,*head,*temp,*tail;
void push(int n)
{
  clrscr();
  if(head==0)
  {
  head=0;
  }
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=n;
  newnode->next=0;
  if(head==0)
  {
   head=temp=tail=newnode;
   newnode->next=head;
  }
  else
  {
   tail=newnode;
   temp->next=newnode;
   newnode->next=head;
   temp=temp->next;
  }
}
void display()
{
 temp=head;
 printf("Elements in link list are :\n");
 while(temp->next!=head)
 {
 printf("%d\n",temp->data);
 temp=temp->next;
 }
 printf("%d",temp->data);
}
void pop()
{
 clrscr();
 temp=head;
 while(temp->next!=tail)
 {
  temp=temp->next;
 }
 temp->next=head;
 printf("poped element is :%d\n",tail->data);
}
void main()
{
 push(1);
 push(2);
 pop();
 push(2);
 push(3);
 pop();
 display();
 getch();
}