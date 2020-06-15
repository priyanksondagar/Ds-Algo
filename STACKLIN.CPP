#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *temp,*top,*newnode;
void push(int n)
{
 clrscr();
 if(top==0)
 {
 top=0;
 }
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=n;
 printf("Pushed element is :%d\n",n);
 newnode->next=top;
 top=newnode;
}
void pop()
{
 clrscr();
 temp=top;
 printf("poped element is :%d\n",temp->data);
 top=top->next;
 free(temp);
}
void peek()
{
 printf("Last element is :%d\n",top->data);
}
void display()
{
 temp=top;
 printf("Now stack is :\n");
 if(top==0)
 {
  printf("empty\n");
 }
 while(temp!=0)
 {
 printf("%d\n",temp->data);
 temp=temp->next;
 }
}
void main()
{
 clrscr();
 push(1);
 push(2);
 push(3);
 pop();
 push(3);
 pop();
 pop();
 pop();
 push(1);
 pop();
 push(123);
 pop();
 display();
 push(1);
 push(2);
 push(3);
 pop();
 display();
 peek();
 getch();
}