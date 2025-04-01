#include<stdio.h>
int main(){
    int n,i,j,t;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-2;i++){
        for(j=0;j<=n-i-2;j++){
            if(a[j]>a[j+1]){
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }printf(" sorted elements\n");
    for(i=0;i<n;i++){
        printf("%3d",a[i]);
    }printf("\neven elements");
    for(i=0;i<n;i++){
        if(a[i]%2==0)printf("%3d ",a[i]);
    }
    printf("\nodd elements");
    for(i=n-1;i>=0;i--){
        if(a[i]%2!=0)printf("%3d ",a[i]);
    }
    return 0;
}