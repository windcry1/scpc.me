/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/19/2019 1:05:53 AM
*************************************************************************/
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <iostream>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <complex>
#include <stack>
#include <bitset>
#include <iomanip>
#include <list>
#if __cplusplus >= 201103L
#include <unordered_map>
#include <unordered_set>
#endif
#define ll long long
#define ull unsigned long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const double clf = 1e-8;
const int MMAX = 0x7fffffff;
const int INF = 0xfffffff;
const int mod = 1e9+7;
int cnt[26];
string s;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("G:\\LOL\\scpc.me\\1007\\13.in","r",stdin);
	//freopen("G:\\LOL\\scpc.me\\1007\\13.out","w",stdout);
	cin>>s;int len=s.length();
	for(int i=0;i<len;i++){
		bool flag=false;
		for(int j=s[i]-1-'a';j>=0;j--)
			if(cnt[j]) flag=true;
		cout<<(flag?"xiaojiejie":"daxuejie")<<endl;
		cnt[s[i]-'a']++;
	}
	return 0;
}
