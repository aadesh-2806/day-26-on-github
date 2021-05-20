#include<stdio.h>

void main()
{
	
	int i,a[100],k,n,s,j,t,p;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);						//missing.c
		scanf("%d",&a[i]);
		i++;
	}
	printf("enter value for start=");
	scanf("%d",&t);
	printf("enter value for stop=");
	scanf("%d",&s);
	
	j=t;
	i=0;
	while(i<=n-1)
	{
		if(j!=s+1)
		{
			if(j==a[i])
			{
				j++;
				i=-1;
			}
			else
			{
				if(i==n-1)
				{
					printf("%d ",j);
					j++;
					i=-1; 
				}
				
			}
		}
		else
		{
			break;
		}
		i++;
	}
	
	getch();
	
}	
