#include <stdio.h>
int fact(int a){
    int i,p=1;
    for(i=1;i<=a;i++){
        p=p*i;
    }
    return p;
}
int main(){
    int a,rem,n,sum=0;
    scanf("%d",&a);
    n=a;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum+fact(rem);
    }
    if(sum==n) printf("The number %d is a strong number",n);
    else printf("The number %d is not a strong number",n);
}