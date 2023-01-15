#include <stdio.h>
int main(){
    int a,b,x,y,i,n;
    scanf("%d",&a);
    x=0;
    y=1;
    printf("%d %d ",x,y);
    for(i=1;i<a-1;i++){
        n=x+y;
        x=y;
        y=n;
        printf("%d ",n);
    }
}