/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/29/2019 8:32:17 PM
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
int n,k,res,a[1000010],x;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("G:\\LOL\\scpc.me\\1038\\1.in","r",stdin);
	//freopen("G:\\LOL\\scpc.me\\1038\\1.out","w",stdout);
	cin>>n>>k;
	for(int i=1;i<=n;i++)	cin>>x,a[x%k]++;
	for(int i=0;i<k;i++)	if(a[i])	res++;
	cout<<res<<endl;
	return 0;
}

