#include<stdio.h>
int a[20000010];
int main(){
	int n;scanf("%d",&n);
	int t; 
	for(int i=1;i<=n;i++){
		scanf("%d",&t);a[t]++;
	}
	int flag=0;
	for(int i=20000000;i>=0;i--){
		if(!a[i]) continue;
		flag+=a[i];
		if(flag==3){
			printf("%d\n",i);
			return 0;
		}
	}
	return 0;
}

