#include <stdio.h>
int main(){
    int a,b,i,a1=0,a2=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    scanf("%d",&b);
    for(i=0;i<a;i++){
        if(n[i]<=b) a1++;
        if(n[i]>b) a2=a2+2;
    }
    printf("%d",a1+a2);
}