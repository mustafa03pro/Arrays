#include<stdio.h>
int main(){
    int n,i,j,t,pos,ele;
    int a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the new element and position:  ");
    scanf("%d%d",&ele,&pos);
    if(pos<1 ||pos>n+1)printf("position 1 to %d",n+1);
    else{
        for(i=n;i>=pos;pos--)a[i]=a[i-1];
        a[i]=ele;
        printf("elements are: ");
        for(i=0;i<=n;i++){
            printf("%4d",a[i]);
        }
    }
    
   
    return 0;
}