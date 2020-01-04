#include<bits/stdc++.h>
using namespace std;
double random_unint(unsigned int min, unsigned int max, unsigned int seed = 0) {
	static default_random_engine e(seed);
	uniform_real_distribution<double> u(min, max);
	return u(e);
}
int main() {
	freopen("G:\\LOL\\scpc.me\\1054\\1.in","r",stdin);
	freopen("G:\\LOL\\scpc.me\\1054\\1.out","w",stdout);
//	int T=100000;
//	printf("%d\n",T);
//	for(int i=0;i<T;i++){
//		int b=random_unint(1,10000,time(NULL));
//		int a=(b+1)*(int)random_unint(1,100,time(NULL));
//		printf("%d %d\n",a,b);
//	}
	int T;scanf("%d",&T);
	while(T--){
		int a,b;scanf("%d%d",&a,&b);
		if (a <= b)
			printf("caicainiubi!\n");
		else {
			if (a % (b + 1))
				printf("caicainiubi!\n");
			else
				printf("zhangrongxinniubi!\n");
		}
	}
	return 0;
}

