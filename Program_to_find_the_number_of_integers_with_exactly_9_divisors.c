#include <stdio.h>
int div(int a){
    int i,b=0;
    for(i=1;i<=a;i++){
        if(a%i==0) b++;
    }
    if(b==9) return 1;
    else return 0;
}
int main(){
    int a,i,b=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(div(i)==1){
            printf("%d ",i);
            b++;
        }
    }
    printf("
Total=%d",b);
}