#include <stdio.h>
int prime(int a){
    int i,b=0;
    for(i=1;i<=a;i++){
        if(a%i==0) b++;
    }
    if(b==2) return 1;
    else return 0;
}

int main(){
    int a,c,b=0,rem,sum=0;
    scanf("%d",&a);
    c=prime(a);
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum+prime(rem);
        b++;
    }
    if(sum+c==b+1) printf("Mega Prime");
    else printf("Not Mega Prime");
}