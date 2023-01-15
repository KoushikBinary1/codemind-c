#include <stdio.h>
int main(){
    int a,sum,rem,p;
    scanf("%d",&a);
    sum=0;
    p=1;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum+rem;
        p=p*rem;
    }
    printf("%d",p-sum);
}