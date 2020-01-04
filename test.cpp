#include <stdio.h>
int main(void){
	freopen("G:\\ACM\\scpc.me\\1067\\2.in","r",stdin);
	int n,temp;
	int Fir = -1,Sec = -1,Thi = -1;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		scanf("%d",&temp);
		if(temp >= Fir){
			Thi = Sec;
			Sec = Fir;
			Fir = temp;
			continue;
		}
        	if(temp >= Sec){
			Thi = Sec;
			Sec = temp;
			continue;
		}
		if(temp >= Thi)
			Thi = temp;
	}
	printf("%d\n",Thi);
	return 0;
}

