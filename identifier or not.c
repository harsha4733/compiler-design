#include<stdio.h>
int main()
{
	char value;
	printf("enter a value:");
	scanf("%c",&value);
	if((value>='a' && value<='z')||(value>='A' && value<='Z'))
	{
		printf("identifier");
	}
	else
	{
		printf("not an identifier");
	}
}
