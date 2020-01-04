#include<bits/stdc++.h>
using namespace std;
double random_unint(unsigned int min, unsigned int max, unsigned int seed = 0) {
	static default_random_engine e(seed);
	uniform_real_distribution<double> u(min, max);
	return u(e);
}
int main() {
	freopen("G:\\LOL\\scpc.me\\1055\\8.in","r",stdin);
	freopen("G:\\LOL\\scpc.me\\1055\\8.out","w",stdout);
	int i,m,k;
	string s;
	cin>>s;
	m=s.size();
	k=m-1;
	for(i=1; i<m; ++i)
		if(s[i]==s[i-1])k--;
	if(s[m-1]=='0')k++;
	cout<<k;
	return 0;
}
