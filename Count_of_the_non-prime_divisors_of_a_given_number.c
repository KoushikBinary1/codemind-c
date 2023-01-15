#include <stdio.h>
int prime(int a){
    int i,b=0;
    for(i=1;i<=a;i++){
        if(a%i==0) b++;
    }
    if(b==2) return 1;
    else return 0;
}
int main(){
    int a,b=0,i,sum=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if(a%i==0){
            b++;
            sum=sum+prime(i);
        }
    }
    printf("%d",b-sum);
}