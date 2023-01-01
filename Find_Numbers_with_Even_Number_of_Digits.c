#include <stdio.h>
int even(int a){
    int rem,b=0;
    while(a>0){
        rem=a%10;
        a=a/10;
        b++;
    }
    return b;
}
int main(){
    int a,i,b=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
        if(even(n[i])%2==0) b++;
    }
    printf("%d",b);
}