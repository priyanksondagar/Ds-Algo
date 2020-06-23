#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int n)
{
 clrscr();
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=n;
 newnode->next=0;
 if(front==0&&rear==0)
 {
  front=rear=newnode;
 }
 else
 {
  rear->next=newnode;
  rear=newnode;
 }
}
void dequeue()
{
 struct node *temp;
 if(front==0&&rear==0)
 {
  printf("queue is empty");
 }
 else if(front==rear)
 {
  temp=front;
  printf("deleted element is : %d\n",temp->data);
  front=rear=0;
  free(temp);
 }
 else
 {
  temp=front;
  printf("deleted element is : %d\n",temp->data);
  front=front->next;
  free(temp);
 }
}
void peek()
{
 if(front==0&&rear==0)
 {
  printf("Queue is empty\n");
 }
 else
 {
 printf("Element in the begining is : %d\n",front->data);
 }
}
void display()
{
 struct node *temp;
 if(front==0&&rear==0)
 {
  printf("queue is empty\n");
 }
 else
 {
  temp=front;
  printf("Elements in queue are :\n");
  while(temp!=0)
  {
   printf("%d\n",temp->data);
   temp=temp->next;
  }
 }
}
void main()
{
 clrscr();
 enqueue(1);
 enqueue(2);
 enqueue(3);
 enqueue(4);
 dequeue();
 dequeue();
 dequeue();
 dequeue();
 enqueue(1);
 enqueue(2);
 enqueue(3);
 dequeue();
 dequeue();
 dequeue();
 enqueue(1);
 enqueue(100);
 enqueue(200);
 dequeue();
 dequeue();
 peek();
 display();
 getch();
}