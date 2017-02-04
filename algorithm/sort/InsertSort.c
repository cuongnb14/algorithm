//#include<conio.h>
#include<stdio.h>

void insertSort(int *a, int n)
{
	int i,j,last;
	for (i=1; i<n; i++)
	{
		j=i;
		last=a[i];
		while(j>0&&a[j-1]>last)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=last;
	}
}
int main()
{
	int n,i;
	int a[12];
	printf("n= "); scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		printf("\na[%d]= ",i+1); scanf("%d",&a[i]);
	}
	insertSort(a,n);
	for(i=0;i<n;i++)
	printf("\na[%d]= %d", i+1,a[i]);
	return 0;
}
