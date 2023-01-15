#include <stdio.h>
int main(){
    int a,rem,n,sum;
    scanf("%d",&a);
    n=a;
    sum=0;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    if(n==sum) printf("True");
    else printf("False");
}