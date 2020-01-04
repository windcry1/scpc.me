/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/5/2019 12:59:16 PM
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
double random_unint(unsigned int min, unsigned int max, unsigned int seed = 0){
    static default_random_engine e(seed);
    static uniform_real_distribution<double> u(min, max);
    return u(e);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("G:\\LOL\\scpc.me\\1052\\5.in","w",stdout);
	//freopen("G:\\LOL\\scpc.me\\1052\\1.out","w",stdout);
	int n;
	n=10000;
	cout<<n<<endl;
	for(int i=0;i<n;i++){
		cout<<(int)(random_unint(0,200000,time(NULL))-100000)<<" ";
	}
	cout<<endl;
	cout<<10000<<endl;
	for(int i=0;i<10000;i++){
		int a=((int)random_unint(0,200000,time(NULL)))%10000+1;
		int b=((int)random_unint(0,200000,time(NULL)))%10000+1;
		if(a>b) swap(a,b);
		cout<<a<<" "<<b<<endl;
	}
	return 0;
}

