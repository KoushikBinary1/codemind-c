#include <stdio.h>
int main(){
    int a,n,rem,sum=0;
    scanf("%d",&a);
    n=a;
    if(a>0) a=a;
    else a=-(a);
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    if(n>0) printf("%d",sum);
    else printf("-%d",sum);
}