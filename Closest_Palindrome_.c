#include <stdio.h>
int p(int a){
    int n=a,rem,sum=0;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum*10+rem;
    }
    if(sum==n) return 1;
    else return 0;
}
int main(){
    int a,i,n,min,max;
    scanf("%d",&a);
    for(i=1;i<=a+1000;i++){
        if(p(i)==1) n=i;
        if(n<a) min=n;
        if(n>a){
            max=n;
            break;
        }
    }
    if(max-a>a-min) printf("%d",min);
    else if(max-a==a-min) printf("%d %d",min,max);
    else printf("%d",max);
}