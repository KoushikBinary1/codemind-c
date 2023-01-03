#include <stdio.h>
int main(){
    int l,a,b,c,w,L,B,A;
    scanf("%d %d %d %d",&l,&b,&w,&c);
    L=2*w+l;
    B=2*w+b;
    a=l*b;
    A=L*B;
    printf("%d",(A-a)*c);
}