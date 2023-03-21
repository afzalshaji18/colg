#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
char stack[100];
	int top=-1,size;
	void push(char item)
{
	if(top==size-1)
	{
		printf("overflow");
		exit(1);
	}
	else
	{
		top++;
		stack[top]=item;
	}
}
char pop()
{
	char item;
	if(top<0)
	{
		printf("underflow");
		exit(1);
	}
	else
	{
		item=stack[top];
		top--;
		return(item);
	}
}
int is_operator(char symbol)
{
	if(symbol=='^'||symbol=='/'||symbol=='*'||symbol=='%'||symbol=='+'||symbol=='-')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int precedence(char symbol)
{
	if(symbol=='^')
		return 3;
	else if(symbol=='*'||symbol=='/'||symbol=='%')
		return 2;
	else if(symbol=='+'||symbol=='-')
		return 1;
	else
		return 0;
}
void infixtopostfix(char intfix_exp[],char postfix_exp[])
{
	int i,j;
	char item,x;
	push( '(' );
	strcat(intfix_exp, ")");
	i=0;
	j=0;
	item=intfix_exp[i];
	while(item!='\0')
	{
		if(item=='(')
		{
		push(item);
		}
	}
	if(isdigit(item)||isalpha(item))
	{
		postfix_exp[j]=item;
		j++;
	}
	else if(is_operator(item)==1)
	{
		x=pop();
		while((is_operator(x)==1)&&(precedence(x)>=precedence(item)))
		{
			postfix_exp[j]=x;
			j++;
			x=pop();
		}
		push(x);
		{
			push(item);
		}
	}
		else if(item==')')
		{
			x=pop();
			while(x!='(')
			{
				postfix_exp[j]=x;
				j++;
				x=pop();
			}
		}
		else
		{
			printf("\n invalid expression \n");
			exit(0);
		}
		i++;
		item=intfix_exp[i];
	}
		void main()
		{
			char infix[100],postfix[100];
			printf("enter size of stack:");
			scanf("%d",& size);
			printf("enter infix expression:");
			scanf("%s",infix);
			infixtopostfix(infix,postfix);
			printf("postfix expression=",postfix);
		}

