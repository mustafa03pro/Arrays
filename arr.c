#include<stdio.h>
int main(){
    int a[100],i,n,j,t,max,min;
    printf("enter the array size: ");scanf("%d",&n);
    printf("Enter %d elements",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<=n-2;i++){
        for(j=0;j<=n-i-2;j++){
            if(a[j]>a[j+1]){
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }
        printf("sorted elements are ");
        for(i=0;i<n;i++){
            printf("%4d",a[i]);
        }
    //     printf("\nenter the nth min and nth max values ");
    //     scanf("%d%d",&min,&max);
    //     for(i=1;i<n;i++){
    //         if(a[i]>a[i-1]){
    //             min--;
    //             if(min==1){
    //                 printf("\nMin=%d\n",a[i]);break;
    //             }
    //         }
    //     }
    //     for(i=n-2;i>=0;i--){
    //         if(a[i]<a[i+1]){
    //             max--;
    //             if(max==1){
    //                 printf("Max=%d",a[n-1]);break;
    //             }
    //         }
    //     }
    
    return 0;
}