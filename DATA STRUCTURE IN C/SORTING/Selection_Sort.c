//Selection_Sort

#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],i,j,k,n,t;
	clrscr();

	printf("enter n numbers");
	scanf("%d",&n);

	printf("enter element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]) ;
	}
	printf("print element\n") ;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);

	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
        a[j]=t;

			}

		}

	}
	printf("print element after sorting");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);

	}
	getch();

}
