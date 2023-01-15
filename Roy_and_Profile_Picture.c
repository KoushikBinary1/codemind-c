#include <stdio.h>
int main(){
    int l,t;
    scanf("%d
%d",&l,&t);
    while(t--){
        int w,h;
        scanf("%d %d",&w,&h);
        if(w<l || h<l) printf("UPLOAD ANOTHER
");
        else if(w==h) printf("ACCEPTED
");
        else printf("CROP IT
");
    }
}