#include<stdio.h>
int main(){
    int a[100],n,i,t ,max,min;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(max=min=a[0],i=1;i<n;i++){
        if(min>a[i])min=a[i];
        if(max<a[i])max=a[i];
    }
    printf("Minimum element: %d\n",min);
    printf("Maximum element: %d",max);

    return 0;
}