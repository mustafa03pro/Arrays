#include<stdio.h>
int main(){
    int a[100],n,i,t,j;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid Size");return 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++){
        for(j=0;j <=n-i-2;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        
    }
    printf("Sorted array in ascending order: ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        if (i < n - 1) {
            printf(" ");  // Print space
        }
    }
    printf("\n");
    return 0;
}