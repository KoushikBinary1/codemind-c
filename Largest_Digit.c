#include <stdio.h>
int main(){
    int a,rem,max,i,b=0,n[20];
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        a=a/10;
        n[b]=rem;
        b++;
    }
    max=n[0];
    for(i=0;i<b;i++){
        if(n[i]>max) max=n[i];
    }
    printf("%d",max);
}