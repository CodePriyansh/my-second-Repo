//1Bubble Sort in C
#include<stdio.h>
void Buble_sort(int [],int);
int main(){
 int i,n;
 printf("Enter a size of Array\n");
 scanf("%d",&n);
 int a[n];
 printf("Enter a Element of %d Array\n",n);
  for(i=0;i<n;i++){
   scanf("%d",&a[i]);
  }
 Buble_sort(a,n);
 }
 //Defination
 void Buble_sort(int a[],int n){
 int i,j,temp;
  for(i=0;i<n;i++){ 
    for(j=1;j<n-i;j++){
    
     if(a[j-1]>a[j]){
        temp=a[j-1];
        a[j-1]=a[j];
        a[j]=temp;
     }
    }
   }
 printf("After Buble sort...\n");
 for(i=0;i<n;i++){
  printf("%d  ",a[i]);   
 }
} 
  
