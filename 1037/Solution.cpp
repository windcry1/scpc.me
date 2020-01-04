#include<bits/stdc++.h>
#define Max 99999999
using namespace std;
typedef struct{
	int bn;
	int ed;
}Mo;
Mo a[101];
int cmp(Mo a,Mo b) {
	return a.ed<b.ed;
}
int main()
{
	freopen("G:\\LOL\\scpc.me\\1037\\2.in","r",stdin);
	freopen("G:\\LOL\\scpc.me\\1037\\2.out","w",stdout);
	int n;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i].bn>>a[i].ed;
	sort(a,a+n,cmp);
	int sum=1,st=a[0].ed;
	for(int i=1;i<n;i++)
	{
		if(a[i].bn>=st)
		{
			st=a[i].ed;
			sum++;
		}
	}
	cout<<sum<<endl;
	return 0;
}
