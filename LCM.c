#include <stdio.h>
int main(){
    int a,b,c,l,i;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i++){
        if(a%i==0 && b%i==0) c=i;
    }
   l=a*b/c; 
   printf("%d",l);
}