#include <stdio.h>
int prime(int a){
    int i,b=0;
    for(i=1;i<=a;i++){
        if(a%i==0) b++;
    }
    if(b==2) return 1;
}
int main(){
    int a,i,min,max;
    scanf("%d",&a);
    for(i=1;i<=a+100;i++){
        if(prime(i)==1 && i<a) min=i;
        if(prime(i)==1 && i>=a){
            max=i;
            break;
        }
    }
    if(a-min>max-a) printf("%d",max-a);
    else printf("%d",a-min);
}