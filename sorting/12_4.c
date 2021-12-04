//4Merge Sort in C
#include<stdio.h>
void merge( int [],int [],int);
int main()
{
int i,n,j;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n];
	int b[n];
	
	printf("enter first element\n");
	for(i=0;i<n;i++){
	  scanf("%d",&a[i]);
	}
	
	printf("Enter second array element \n");
	for(i=0;i<n;i++){
	  scanf("%d",&b[i]);
	}
  merge(a,b,n);
}
//Defination...
void merge( int a[],int b[],int n){
 int i,j,t,k;
 k=n+n;
 int c[k];
 for(i=0,t=0;i<n;i++,t++){
    c[t]=a[i];
 } 
  for(j=0;j<n;j++,t++){
    c[t]=b[j];
  }
 for(i=0;i<k;i++){
  printf("%d  ",c[i]);
 }
}
