#include <stdio.h>
int r(int a){
    int rem,sum=0;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    return sum;
}
int p(int a){
    int b;
    b=r(a);
    if(a+b==r(a+b)) return a+b;
    else p(a+b);
}
int main(){
    int x;
    scanf("%d",&x);
    printf("%d",p(x));
}