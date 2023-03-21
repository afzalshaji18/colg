#include<stdio.h>
#define max 10
int stack[max],top=-1;
void push(int stack[],int);
void display();
void main()
{
 int n,rem;
 printf("Enter the decimal number: ");
 scanf("%d",&n);
 while(n>0)
  { 
   rem=n%2;
   push(stack,rem);
   n=n/2;
   }
  display();
}
void push(int stack[],int rem)
 {
  if(top==(max-1))
  {
   printf("stack is full");
  }
  else
   {
    top++;
    stack[top]=rem;
   }
  }
void display()
 {
  printf("binary number: ");
  for(int i=top;i>=0;i--)
  {
   printf("%d",stack[i]);
   }
 }      
