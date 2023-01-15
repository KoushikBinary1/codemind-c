#include <stdio.h>
int main(){
    int a,sum,i;
    scanf("%d",&a);
    sum=0;
    for(i=1;i<a;i++){
        if(a%i==0) sum=sum+i;
    }
    if(sum==a) printf("True");
    else printf("False");
}