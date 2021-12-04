//1Binary Search in C
#include<stdio.h>
 void binary_search(int[],int n);
 int main(){
  int i,n;
  printf("Enter a size of Array\n");
  scanf("%d",&n);
  int a[n];
  printf("Enter a Array Element %d \n",n);
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
  binary_search(a,n);
 }
 //Defination...
 void binary_search(int a[],int n)
 {
  int low=0,hight=n-1,mid,f=0,ele;
  printf("Enter a Search Element = ");
  scanf("%d",&ele);
 while(low<=hight)
 {
	 mid=(low+hight)/2;
	 if (ele==a[mid])
	 {
	 	f=1;
	 	break;
	 }
	 
	else if(ele>a[mid])
	 	low=mid+1;
	else if (low<=hight)
		hight=mid-1;
 }
 if(f)
 	 printf("Element Found\n");
 else
 	printf("Element not Found\n");
 }
