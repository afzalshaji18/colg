#include<stdio.h>
#define m 30
int queue[m],front=-1,rear=-1;
void pop()
{
	if(front>rear)
	{
		printf("queue is empty\n");
	}
	else
	{
		printf("popped element is%d\n",queue[front]);
		front++;
	}
}
void push()
{
	if(rear==m-1)
	{
		printf("overflow\n");
	}
	else
	{
		int n;
		printf("Enter number:");
		scanf("%d",&n);
		if(front==-1&&rear==-1)
		{
			front=rear=0;
		}
		else
		{
		rear++;
		
		}
		queue[rear]=n;
	}
}
void peek()
{
	if(rear==-1)
	{
		printf("\nQueue empty\n");
	}
	else
	{
		printf("1st element is %d\n",queue[front]);
	}
}
void delete()
{
	if(front==-1)
	{
		printf("Queue empty\n");
	}
	else
	{
		front=rear=-1;
	}
}
void printqueue()
{
	if(front>rear)
	{
		printf("Queue empty");
	}
	else
	{
		printf("the queue is \n");
		for(int i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
		printf("\n");
	}
}
void main()
{
	int op;
	do
	{
		printf("\n menu \n");
		printf(" 1.insert\n 2.pop\n 3.peak\n 4.delete\n 5.print\n");
		printf("\n Enter option:");
		scanf("%d",&op);
		switch(op)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
			break;
			case 4:delete();
			break;
			case 5:printqueue();
			break;
			default:printf("error\n");
		}
	}while(op<6);
}
