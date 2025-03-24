#include<stdio.h>
int main(){
    int n,i;
    float a[100],s=0;
    printf("enter the array size: ");scanf("%d",&n);
   
    
        printf("enter the array elements %d\n",n);
        for(i=0;i<n;i++){
            scanf("%f",&a[i]);
            s=s+a[i];
           
        }
        printf("elements sum are %.2f and avg %.2f ",s,s/n);
        
    
    return 0;
}