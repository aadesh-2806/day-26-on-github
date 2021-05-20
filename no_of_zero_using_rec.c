#include<stdio.h>

int rec(int);
void main()
{
	
	int n;

	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	printf("%d",rec(n));
	
	getch();
	
}
int rec(int x)
{
	if(x!=0)
	{
		if(x%10==0)
		{
			return (1+rec(x/10));
		}
		else
		{
			return (rec(x/10));
		}
	}
	else
	{
		return 0;
	}
}
