#include<stdio.h>
void qs(int,int);
int a[100];

main()
{
	int i,n;
	printf("Enter N:");
	scanf("%d",&n);
	printf("Enter Elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	qs(0,n-1);
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
void qs(int start,int end)
{
	int i,j,p,c;
	if(start<end)
	{
		i=start;
		j=end;
		p=i;
	}
	while(i<j)
	{
		while(a[i]<=a[p] && i<end)
		i++;
		while(a[j]>a[p])
		j--;
		if(i<j)
		{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
	c=a[p];
	a[p]=a[j];
	a[j]=c;
	qs(start,j-1);
	qs(j+1,end);
}

