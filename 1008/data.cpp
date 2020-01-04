/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/26/2019 10:30:46 PM
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
const unsigned INF = 5e4;
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
	//freopen("G:\\LOL\\scpc.me\\1008\\1.in","r",stdin);
	freopen("G:\\LOL\\scpc.me\\1008\\8.in","w",stdout);
	cout<<(int)random_unint(0,INF,time(NULL))<<" 1000000"<<endl;
	for(int i=0;i<1000000;i++) cout<<(int)random_unint(0,INF,time(NULL))<<" ";cout<<endl;
	return 0;
}

