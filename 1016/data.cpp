/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/27/2019 8:30:38 AM
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
const int INF = 1000000000;
const int mod = 1e9+7;
int a[1010][1010];
double random_unint(unsigned ll min, unsigned ll max, unsigned int seed = 0)
{
    static default_random_engine e(seed);
    static uniform_real_distribution<double> u(min, max);
    return u(e);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n,m;cin>>n>>m;
	freopen("G:\\LOL\\scpc.me\\1016\\7.in","w",stdout);
	cout<<n<<" "<<m<<endl;
	for(int i=0;i<n;i++) { for(int j=0;j<m;j++) a[i][j]=(int)random_unint(0,INF,time(NULL)),cout<<a[i][j]<<" ";cout<<endl;}
	freopen("G:\\LOL\\scpc.me\\1016\\7.out","w",stdout);
	for(int i=0;i<m;i++) {for(int j=0;j<n;j++) cout<<a[j][i]<<" ";cout<<endl;}
	return 0;
}

