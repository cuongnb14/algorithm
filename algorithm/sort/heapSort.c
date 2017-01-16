// #include<conio.h>
#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void maxHeapify(int *a,int i,int n)
{
	int l,r,largest;
	l=2*i;
	r=2*i+1;
	if(l<=n&&a[l]>a[i])
	{
		largest=l;
	} else largest=i;
	if(r<=n&&a[r]>a[largest])
		largest=r;
	if (largest!=i)
	{
		swap(&a[i],&a[largest]);
		maxHeapify(a,largest,n);
	}
}

void builMaxHeap(int *a, int n)
{
	int i;
	for(i=n/2; i>0;i--)
	{
		maxHeapify(a,i,n);
	}
}

void heapSort(int *a, int n)
{
	int i;
	builMaxHeap(a,n);
	for(i=n;i>1;i--)
	{
		swap(&a[i],&a[1]);
		maxHeapify(a,1,i-1);
	}
}

main()
{
	srand(time(NULL));
	int n,i;
	int a[50];
	printf("n= "); scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		 a[i]=rand()%100;
	}
	heapSort(a,n);
	for(i=1;i<=n;i++)
	printf("\na[%d]= %d", i,a[i]);
}
