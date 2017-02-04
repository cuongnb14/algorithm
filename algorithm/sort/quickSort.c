//#include<conio.h>
#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int partition(int *a,int left, int right)
{
	int i,j,pivot;
	i=left, j=right+1; pivot=a[left];
	while(i<j)
	{
		i++;
		while(i<right&&a[i]<=pivot) i++;
		j--;

		while(j>left&&a[j]>=pivot) j--;
		swap(&a[i],&a[j]);
	}
	swap(&a[i],&a[j]);
	swap(&a[left], &a[j]);
	return j;
}

// Thuật toán quick short với mảng a từ vị trí L đến R.
void quickSort(int *a, int L, int R)
{
	int pivot;
	if (L<R)
	{
		pivot=partition(a,L,R);
		if(L<pivot)
		 quickSort(a,L,pivot-1);
		 if (R>pivot)
		 quickSort(a,pivot+1,R);
	}
}
int main()
{
	srand(time(NULL));
	int n,i;
	int a[30];
	printf("n= "); scanf("%d", &n);
	for (i=0; i<n; i++)
	{
		 a[i]=rand()%100;
	}
	quickSort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("\na[%d]= %d", i+1,a[i]);

	return 0;
}
