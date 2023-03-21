#include<stdio.h>
#define max 10
int queue[max],front=-1,rear=-1;
void push(int);
int pop();
void main()
{
  int num ;
  printf("enter the number: ");
  scanf("%d",&num);
    do{
         int rem=num%10;
         push (rem);
         num/=10;
      }
      	  while(num>0);
      	  printf("the reverse is \n");
      	  while(front<=rear){
      	  printf("%d",pop() );
      }
}
void push(int n){
if (rear==-1){
front=rear=0;
}
   else 
        {
          rear++;
   }
   	  queue[rear]=n;
  }
int pop(){
      if (front==-1)
      	printf("queue is empty: \n");
      else
         {
        int t = queue [front];
        front++;
        return t;
       }
}
        
