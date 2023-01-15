#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,i,p;
        scanf("%d",&a);
        p=1;
        for(i=1;i<=a;i++){
            p=p*i;
        }
        printf("%d
",p);
    }
}