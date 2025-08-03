#include<stdio.h>
int  main(){
    int a[100],n,pos,val;
    printf("Enter the no of elements in an array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the position to insert:");
    scanf("%d",&pos);
    printf("Enter the value to insert:");
    scanf("%d",&val);

    for(int i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=val;
    n++;
printf("The new array is:");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;







}