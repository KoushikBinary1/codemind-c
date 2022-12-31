#include <stdio.h>
int main(){
    int a,b,c=0,i,j;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        b=0;
        for(j=0;j<a;j++){
        if(n[i]==n[j]) b++;}
            if(b==1) {printf("%d ",n[i]); 
            c++;}
    }
    if(c==0) printf("%d",-1);
}