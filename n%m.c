#include<stdio.h>

void main()
{
	
	int i,a[100],s,n,m;
	
	printf("hello\nenter value=");
	scanf("%d",&n);
	printf("enter value for divi=");
	scanf("%d",&m);
 
 	if(n%m==0)
 	{
 		printf("%d ",n);
	}   	
	   
	else
	{
	    if(n>m)
		{
			s=(n+m)/2.0;
			i=s+n;
			while(i>s)
			{
				if(i%m==0)														//try to und que 
				{
					printf("%d ",i);	
				}
				i--;
			}
		}
		else
		{
			printf("invalid");
		}
	}	
	getch();
	
}	 
