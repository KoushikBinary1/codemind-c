#include <stdio.h>
int main(){
    int a,rem,b=0,c=0,i,j,n[20];
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        a=a/10;
        n[b]=rem;
        b++;
    }
    for(i=0;i<b;i++){
        for(j=0;j<b;j++)
        if(n[i]==n[j]) c++;
    }
    if(c<=b) printf("Unique Number");
    else printf("Not Unique Number");
}