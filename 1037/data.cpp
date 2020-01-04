/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/29/2019 4:51:48 PM
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
double random_unint(unsigned int min, unsigned int max, unsigned int seed = 0)
{
    static default_random_engine e(seed);
    static uniform_real_distribution<double> u(min, max);
    return u(e);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("G:\\ACM\\scpc.me\\1037\\2.in","w",stdout);
	cout<<100<<endl;
	for(int i=0;i<100;i++){
		int t1=(int)random_unint(0,1000,time(NULL)),t2=(int)random_unint(0,1000,time(NULL));
		if(t1>t2) swap(t1,t2);cout<<t1<<" "<<t2<<endl;
	}
	return 0;
}

