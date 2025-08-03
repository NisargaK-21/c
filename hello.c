#include<stdio.h>
int  main(){
   int a[50],n,pos;

   printf("Enter the no of elemnts in an array:");
   scanf("%d",&n);

   printf("Enter the array elemnts:");
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }

   printf("Enter the position to delete:");
   scanf("%d",&pos);
   

if(pos<0 || pos>=n){
    printf("Invalid position\n");
}

for(int i=pos-1;i<n;i++){
    a[i]=a[i+1];
}
n--;

printf("The new array:\n");
for(int i=0;i<n;i++){
    printf("%d ",a[i]);
}


    return 0;

}