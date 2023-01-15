#include <stdio.h>
int main(){
    int a,n,i,x=0,y=1;
    scanf("%d",&a);
    printf("%d %d ",x,y);
    for(i=1;i<=a-2;i++){
        n=x+y;
        x=y;
        y=n;
        printf("%d ",n);
    }
}