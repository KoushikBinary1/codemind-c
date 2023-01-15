#include <stdio.h>
void div(int a){
	int b=a,rem,c=0,d=0;
	while(b>0){
		c++;
		rem=b%10;
		if(rem!=0 && a%rem==0) d++;
		b=b/10;
	}
	if(c==d) printf("%d ",a);
}
int main(){
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		div(i);
	}
}