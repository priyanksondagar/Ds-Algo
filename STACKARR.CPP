#include<stdio.h>
#include<conio.h>
int stack[1];
int top=-1;
void push(int n)
{
 clrscr();
 top++;
 if(top>0)
 {
  top--;
  printf("Overflow condition\n");
 }
 else
 {
  stack[top]=n;
  printf("pushed element is :\n%d\n",stack[top]);
 }
}
void pop()
{
 clrscr();
 if(top==-1)
 {
  printf("Underflow condition\n");
 }
 else
 {
 printf("poped element is :%d\n",stack[top]);
 top--;
 }
}
void display()
{
 printf("now stack is :\n");
 if(top==-1)
 {
  printf("empty");
 }
 for(int i=0;i<=top;i++)
 {
  printf("%d\n",stack[i]);
 }
}
void main()
{
 clrscr();
 push(1);
 push(2);
 display();
 getch();
}