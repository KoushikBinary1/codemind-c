#include <stdio.h>
int main(){
    int a,x,b=0,i,s1,s2,rem,n[20];
    scanf("%d %d",&a,&x);
    while(a>0){
        rem=a%10;
        a=a/10;
        n[b]=rem;
        b++;
    }
    for(i=x-1;i>=0;i--){
        s1=s1*10+n[i];
    }
    for(i=b-1;i>=b-x;i--){
    s2=s2*10+n[i];}
    if(s1>s2) printf("%d",s1-s2);
    else printf("%d",s2-s1);
}