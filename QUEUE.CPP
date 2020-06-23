#include<stdio.h>
#include<conio.h>
int que[5];
int front=-1;
int rear=-1;
int temp;
void enqueue(int n)
{
 clrscr();
 if(rear==n-1)
 {
  printf("Que full\n");
 }
 else if(front==-1&&rear==-1)
 {
  front=rear=0;
  que[rear]=n;
 }
 else
 {
  rear++;
  que[rear]=n;
 }
}
void dequeue()
{
 clrscr();
 if(front==-1&&rear==-1)
 {
  printf("Que is empty");
 }
 else if(front==rear)
 {
  printf("Deleted element is :%d\n",que[front]);
  front=rear=-1;
 }
 else
 {
  printf("Deleted element is : %d\n",que[front]);
  front++;
 }
}
void peek()
{
 if(front==-1&&rear==-1)
 {
  printf("queue is empty\n");
 }
 else
 {
 printf("Element in the begining is : %d\n",que[front]);
 }
}
void display()
{
 if(front==-1&&rear==-1)
 {
  printf("queue is empty\n");
 }
 else
 {
 temp=front;
 printf("Now elemnt in que is:\n");
 while(temp<rear+1)
 {
  printf("%d\n",que[temp]);
  temp++;
 }
 }
}
void main()
{
 enqueue(1);
 enqueue(2);
 enqueue(3);
 dequeue();
 dequeue();
 dequeue();
 enqueue(3);
 dequeue();
 enqueue(1);
 enqueue(2);
 enqueue(3);
 dequeue();
 dequeue();
 enqueue(1);
 peek();
 display();
 getch();
}