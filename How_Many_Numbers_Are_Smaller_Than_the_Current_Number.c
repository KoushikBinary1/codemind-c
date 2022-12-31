#include <stdio.h>
int main(){
    int a,b,i,j;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        b=0;
        for(j=0;j<a;j++){
        if(n[i]>n[j]) b++;}
        printf("%d ",b);
        
    }
}