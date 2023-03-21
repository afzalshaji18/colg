#include<stdio.h>
#include <string.h>
int top=-1,count=0;
#define max 1000
char stack[max];
char output[max];
void push(char temp)
{
	if(top==max-1)
	{
		printf("over flow\n");
	}
	else
	{
		stack[++top]=temp;
	}
	void pop()
	{
		if(top==-1)
		{
			printf("underflow\n");
		}
		else
			output[count++]=stack[top--];
	}                                        
	int main()
	{
		char str[max];
		printf("enter string:");
		gets(str);
		for(int i=0;i<strlen(str);i++)
		{
			push(str[i]);
		}
		for(int i=0;i<strlen(str);i++)
		{
			pop();
		}
		for(int i=0;i<strlen(str);i++)
		{
			printf("%c",output[i]);
		}
		printf("\n");
		return 0;
	}
}
