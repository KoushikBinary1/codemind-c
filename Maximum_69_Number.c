#include <stdio.h>
int main(){
    int a,b=0,i,rem,n[20];
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        a=a/10;
        n[b]=rem;
        b++;
    }
    for(i=b-1;i>=0;i--){
        if(n[i]==6){ n[i]=9;
        break;}
    }
    for(i=b-1;i>=0;i--){
        printf("%d",n[i]);
    }
}