#include <stdio.h>
int main(){
    int l,r,i,b,k;
    scanf("%d %d %d",&l,&r,&k);
    b=0;
    for(i=l;i<=r;i++){
        if(i%k==0) b++;
    }
    printf("%d",b);
}