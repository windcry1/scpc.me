#include<stdio.h>
#define ll long long
#define sc scanf
#define pr printf
int hang[10005],lie[10005];
int main()
{
	//freopen("G:\\LOL\\scpc.me\\1034\\4.in","r",stdin);
	//freopen("G:\\LOL\\scpc.me\\1034\\4.out","w",stdout);
	
	int n,m,t;
	while(sc("%d%d%d",&n,&m,&t)>0)
	{   
	    
	    
		for(int i=1;i<=n;i++) hang[i] =0;
		for(int i=1;i<=m;i++) lie[i] =0;
		while(t--)
		{  int x,y;
			scanf("%d%d", &x, &y);
			hang[x] ^= 1;
			lie[y] ^= 1;
		}
		ll cnt1=0,cnt2=0; 
		
			for(int i=1;i<=n;i++) 
			{
				if(hang[i])
				cnt1++;
			}
			for(int i=1;i <= m;i++) 
			{
				if(lie[i])
				cnt2++;
			}
			ll ans = cnt1 * m + cnt2 * n - 2 * cnt1 * cnt2;
		    ans = 1LL * n * m - ans;
			printf("%lld\n",ans);
		
	}

}
