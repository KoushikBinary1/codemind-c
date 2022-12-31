#include <stdio.h>
int main(){
    int a,b,max=0,i,j;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        b=0;
        for(j=0;j<a;j++){
        if(n[i]==n[j]) b++;}
        if(b==1) {
            if(n[i]>max) max=n[i];
        }
    }
    if(max!=0) printf("%d",max);
    else printf("%d",-1);
}