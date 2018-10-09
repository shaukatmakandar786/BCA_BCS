//Merge_Sort

#include<stdio.h>
#include<conio.h>
void merge(int a[100],int f,int m,int l);
void merge_sort(int a[100],int f,int l);
void main()
{
	int a[100],i,n;
	clrscr();

	printf("how many element you want to enter \n");
	scanf("%d",&n);

	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}
	printf("display element before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

	merge_sort(a,0,n-1);
	printf("display elements after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);

	}
	getch();

}
void merge_sort(int a[100],int f,int l)
{
	int m;
	if(f<l)
	{
		m=(f+l)/2;
		merge_sort(a,f,m);
		merge_sort(a,m+1,l);
		merge(a,f,m,l);
	}
}
void merge(int a[100],int f,int m,int l)
{
	int b[100],i,j,k;

	i=f;
	j=m+1;
	k=f;

	while(i<=m && j<=l)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;k++;
		}
		else
		{
			b[k]=a[j];
			j++;k++;
		}
	}
	while(i<=m)
	{
		b[k]=a[i];
		i++;k++;
	}
	while(j<=l)
	{
		b[k]=a[j];
		j++;k++;
	}

	for(i=f;i<=l;i++)
	{
		a[i]=b[i];
	}
}


