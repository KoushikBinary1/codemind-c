#include <stdio.h>
int main(){
    int a,b=0,c=0,i;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++){
        if(i%2==0 && n[i]%2!=0) b++;
        if(i%2!=0 && n[i]%2==0) c++;
    }
    if(b==0) printf("True");
    else printf("False");
}