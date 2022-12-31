#include <stdio.h>
int main(){
    int a,i,f,v;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i=i+2){
        f=n[i];
        v=n[i+1];
        while(f--){
            printf("%d ",v);
        }
    }
}