//linear short
void linear(int[],int n);
#include<stdio.h>
int main(){
int i,n,ele;
 printf("Enter a size of Array\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter a Element of %d Array\n",n);
 for(i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 linear(a,n);
}
//Defination... 
 void linear(int a[],int n){
 int sr,i;
 printf("Enter a Search Element = ");
 scanf("%d",&sr);
 for(i=0;i<n;i++){
  if (sr==a[i]){
  break;
  }
 }
 if (i<n)
  printf("Elemnet Found.\n");
 else
  printf("Element Not Found.\n");
}
