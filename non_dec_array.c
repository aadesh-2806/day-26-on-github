#include<stdio.h>

void main()
{
	
	int i,a[100],r,n;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
	}
	r=0;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			r++;
		}
	}
	
	if(r>1)
	{
		printf("false");
	}
	else
	{
		printf("true");
	}
	getch();
	
}	 		
