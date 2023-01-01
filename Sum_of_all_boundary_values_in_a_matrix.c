#include <stdio.h>
int main(){
    int a,b,i,j,sum=0;
    scanf("%d %d",&a,&b);
    int n[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++)
        scanf("%d",&n[i][j]);
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            if(i==0){ sum=sum+n[i][j];
               
            }
            if(j==0 && i!=0) { sum=sum+n[i][j];
              
            }
            if(i==a-1 && j!=0 && j!=b-1) { sum=sum+n[i][j];
                
            }
            if(j==b-1 && i!=0){ sum=sum+n[i][j];
               
            }
            
        }
    }printf("%d",sum);
}