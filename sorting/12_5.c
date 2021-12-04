//5Heap Sort in C
#include<stdio.h>
void Heap_sort(int [],int n);
int main()
{
int i,n,j;
	printf("enter the array size\n");
	scanf("%d",&n);
	
	int a[n],flag=0;
	printf("enter element\n");
	
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	}
	Heap_sort(a,n);
	}
//Defination..
void Heap_sort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
	if(a[i]>a[j]){
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	for(i=0;i<n;i++)
	printf("%d   ",a[i]);
	}
