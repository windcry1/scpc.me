#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,t;scanf("%d",&n);
	int a=-1,b=-1,c=-1;
	for(int i=0;i<n;i++) {
		scanf("%d",&t);
		if(a<t){
			c=b,b=a,a=t;
			continue;
		}
		if(b<t){
			c=b,b=t;
			continue;
		}
		if(c<t){
			c=t;
		}
	}
	printf("%d\n",c);
	return 0;
}

