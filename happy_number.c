#include <stdio.h>
int div(int a){
    int rem,sum=0;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum+rem*rem;
    }
    if(sum<10) return sum;
    else{
        return div(sum);
    }
}
int main(){
    int a,b;
    scanf("%d",&a);
    b=div(a);
    if(b==1 || b==7) printf("True");
    else printf("False");
}