#include <stdio.h>
int main(){
    long long int a;
    scanf("%lld",&a);
    if(a/100000000==0) printf("Invalid");
    else printf("Valid");
}