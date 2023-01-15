#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,sum,rem,n;
        scanf("%d",&a);
        sum=0;
        n=a;
        while(a>0){
            rem=a%10;
            a=a/10;
            sum=sum*10+rem;
        }
        if(sum==n) printf("True
");
        else printf("False
");
    }
}