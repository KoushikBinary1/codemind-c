#include <stdio.h>
int rev(int a){
    int rem,sum=0;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    return sum;
}
int main(){
    int a,b,c,d;
    scanf("%d",&a);
    b=rev(a);
    c=a*a;
    d=rev(b*b);
    if(c==d) printf("True");
    else printf("False");
}