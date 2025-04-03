#include<stdio.h>
int main(){
    int r,c;
    int a[2] [3]={{2,3,4},5,6,1};
    for(r=0;r<2;r++){
        for(c=0;c<3;c++){
            printf("%3d",a[r] [c]);
        }
        printf("\n");
    }
   
    return 0;
}