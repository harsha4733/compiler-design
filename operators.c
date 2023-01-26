#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch=='+')
	{
		printf("Addition Operator");
	}
	else if(ch=='-')
	{
		printf("Subtraction Operator");
	}
	else if(ch=='*')
	{
		printf("Multiplication Operator");		
	}
	else if(ch=='/')
	{
		printf("Divison Operator");
	}
	else
	{
		printf("it is not an mathematical operator");
	}
}
