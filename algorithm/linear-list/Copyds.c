//#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

typedef long elementType;
typedef struct node
{
	elementType Inf;
	struct node *Next;
} node;

struct node *insert_tohead(struct node *first, elementType x)
{
	struct node *tempNode;
	tempNode=(struct node*)malloc(sizeof(struct node));
	tempNode->Inf=x;
	tempNode->Next=first;
	first=tempNode;
	return first;
}
struct node *insert_last(struct node *last, elementType x)
{
	struct node *tempNode;
	tempNode=(struct node*)malloc(sizeof(struct node));
	last->Next=tempNode; tempNode->Next=NULL; tempNode->Inf=x;
	return last->Next;
}

struct node *copyds(struct node *a)
{
	if(a==NULL) return NULL;
	node *newNode ;
	newNode=(node*)malloc(sizeof(node));
	newNode->Inf=a->Inf;
	newNode->Next=copyds(a->Next);
	return newNode;
}

void main()
{
	struct node *s=NULL,*v,*b;
	elementType a;
	int n,i;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
	printf("Nhap phan tu thu 1: ");
	scanf("%ld",&a);
	s=insert_tohead(s,a);
	v=s;
	for(i=1;i<n;i++)
	{
	printf("Nhap phan tu thu %d: ",i+1);
	scanf("%ld",&a);
	v=insert_last(v,a);
	}
	b=copyds(s);
	printf("Danh sach phan tu:\n");
	v=b;i=0;
	while(v)
	{
		i++;
		printf("\nphan tu thu %d: %ld", i, v->Inf);
		v=v->Next;
	}

}
