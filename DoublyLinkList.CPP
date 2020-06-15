#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create()
{
 struct node
 {
  int data;
  struct node *next;
  struct node *prev;
 };
 struct node *head,*newnode,*temp;
 int choice;
 head=0;
 while(choice)
 {
 newnode=(struct node*)malloc(sizeof(struct node));
 printf("Enter element : ");
 scanf("%d",&newnode->data);
 newnode->next=0;
 newnode->prev=0;
 if(head==0)
 {
  head=temp=newnode;
 }
 else
 {
  temp->next=newnode;
  newnode->prev=temp;
  temp=temp->next;
 }
 printf("do u want to add more element : ");
 scanf("%d",&choice);
 }
}
void display()
{
 struct node
 {
  int data;
  struct node *next;
  struct node *prev;
 };
 struct node *head,*newnode,*temp;
 temp=head;
 while(temp!=0)
 {
  printf("%d\n",temp->data);
  temp=temp->next;
 }
}
void main()
{
 create();
 display();
 getch();
}
