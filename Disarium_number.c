#include <stdio.h>
#include <math.h>
int main(){
    int a,p,rem,i,b=0,c,sum=0,n[20];
    scanf("%d",&a);
    p=a;
    while(a>0){
        rem=a%10;
        a=a/10;
        n[b]=rem;
        b++;
    }
    c=b;
    for(i=0;i<b;i++){
        n[i]=pow(n[i],c);
        c--;
        sum=sum+n[i];
    }
    if(sum==p) printf("True");
    else printf("False");
}