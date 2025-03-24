#include<stdio.h>
int main(){
    int n,i,c,j;
    int a[100];
    printf("enter the array size: ");scanf("%d",&n);
    printf("elements %d are: ",n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(c=0,j=1;j<=a[i];j++){
            if(a[i]%j==0)c++;

        }
        if(a[i]==1)printf("1 is not a prime or composite\n");
        else if(c==2)printf("%d is a prime\n",a[i]);
        else printf("%d is composite\n",a[i]);
    }
    return 0;
}