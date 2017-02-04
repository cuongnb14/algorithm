//#include<conio.h>
#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void selectionSort(int *a, int n)
{
	int i,j,min;
	for (i=0; i<n-1; i++)
	{
		min=i;
		for (j=i+1;j<n;j++)
		{
			if(a[j]<a[min]) min=j;
		}
		swap(&a[i],&a[min]);
	}
}

void main()
{
	int n,i;
	int a[12];
	printf("n= "); scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("\na[%d]= ",i+1); scanf("%d",&a[i]);
	}
	selectionSort(a,n);
	for(i=0;i<n;i++)
	printf("\na[%d]= %d", i+1,a[i]);
}
