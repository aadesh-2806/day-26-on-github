#include<stdio.h>
#include<math.h>

void main()
{	
	int i,a[50],b[50],j,n,m,s;
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter no %d=",i+1);
		scanf("%d",&a[i]);
	}
	printf("enter m=");
	scanf("%d",&m);
	
	i=0;
	for(j=i+1;j<n;j++)
	{
		if(a[j]!=a[i]+1)
		{
			s=a[i]+1;
			break;
		}
		i++;
	}
	printf("%d",s);
	getch();
	
}	
