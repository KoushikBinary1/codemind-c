#include <stdio.h>
int main(){
    int a,i;
    scanf("%d",&a);
    int n[a],left=0,right=a-1;
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    while(left<right){
        while(n[left]==0)
        left++;
        while(n[right]==1)
        right--;
        if(left<right){
            n[left]=0;
            n[right]=1;
            left++;
            right--;
        }
    }
    for(i=0;i<a;i++){
        printf("%d ",n[i]);
    }
}