#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack [MAX],top= -1;
void push (int item);
int pop();
int peek();
void display();
int isempty();
int isfull();
void main ()
{
	int choice,item;
	while (1)
	{
		printf("\n1.push\n2.pop\n3.top element\n4.display\n5.quit\n");
		printf("\nenter your choice:");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:printf("\nenter item to be pushed:");
				scanf("%d",&item);
				push(item);
			break;
			case 2:item=pop();
				printf("\npopped item%d\n",item);
			break;
			case 3:printf("\nitem at the top:%d\n",peek());
			break;
			case 4:display();
			break;
			case 5:exit(1);
			default :printf("\nwrong\n");
		}
	}
}
	void push(int item)
	{
		if(top==MAX-1)
		{
			printf("\nstack over flow\n");
			return;
		}
		top=top+1;
		stack[top]=item;
	}
	int pop()
	{
		int item;
		if (top==-1)
		{
			printf("underflow\n");
			exit(1);
		}
		item=stack[top];
		top=top-1;
		return item;
	}
	int peek()
	{
		if (top==-1)
		{
			printf("\nunderflow\n");
			exit (1);
		}
		return stack[top];
	}
	void display()
{
	int i;
	if (top==-1)
	{
		printf("\nstack is empty\n");
		exit(0);
	}
	printf("\nstack element=\n\n");
	for (i=top;i>=0;i--)
	printf("%d\n",stack[i]);
	printf("\n\n");
}
                                                    
