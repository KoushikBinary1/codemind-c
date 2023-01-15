#include <stdio.h>
int main(){
    int a,b,n,x,i,y;
    scanf("%d",&a);
    x=0;
    b=0;
    y=1;
    for(i=1;i<=a;i++){
        n=x+y;
        x=y;
        y=n;
        if(n==a) b++;
    }
    if(b==1) printf("True");
    else printf("False");
}
