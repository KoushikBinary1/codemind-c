#include <stdio.h>
#include <string.h>
int main(){
    char ch[100];
    scanf("%[^
]%*c",ch);
    printf("%s",ch);
}