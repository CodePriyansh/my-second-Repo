//7Insertion Sort in C
#include<stdio.h>
void inseration( int [],int);
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
  inseration(a,n);
}
//Defination...
void inseration( int a[],int n){
 int i,j,temp;
 
 for(i=0;i<n;i++)
 {
  j=i-1;
  temp=a[i];
  while(j>=0&&a[j]>temp){
   a[j+1]=a[j];
   j--;
  }
  a[j+1]=temp;
 }
 
 for(i=0;i<n;i++){
  printf("%d  ",a[i]);
 }
}
