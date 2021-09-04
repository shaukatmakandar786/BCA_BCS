//Quick_Sort


#include<stdio.h>
#include<conio.h>
void quick_sort(int a[],int,int);
void main()
{
	int a[100],i,n,no;
	clrscr();

	printf("how many element you want to search\n");
	scanf("%d",&n);

	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display element befor sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	quick_sort(a,0,n-1);

	printf("display element after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();

}


void quick_sort(int a[100],int f,int l)
{
	int i,j,t,p;
	if(f<=l)
	{
		p=a[f];
		i=f+1;
		j=l;

		while(i<=j)
		{
			while(p>a[i])
			{
				i++;
			}
			while(p<a[j])
			{
				j--;
			}
			if(i<=j)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		a[f]=a[j];
		a[j]=p;
		quick_sort(a,f,j-1);
		quick_sort(a,j+1,l);
	}
}





