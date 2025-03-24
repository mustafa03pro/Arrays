#include<stdio.h>
int main(){
    int n,i;
    int a[100];
    printf("enter the array size: ");scanf("%d",&n);
    if(n<0||n>100){
        printf("array size shouild be 1-100");
    }
    else{
        printf("enter the array elements %d\n",n);
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        printf("elements are: ");
        for(i=0;i<n;i++)printf("%d\t",a[i]);
    }
    return 0;
}