/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/30/2019 5:49:56 PM
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
const ll INF = 1000000000000000000;
const int mod = 1e9+7;
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
	freopen("G:\\LOL\\scpc.me\\1041\\2.in","w",stdout);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	cout<<100000<<endl;
	for(int i=0;i<100000;i++){
		cout<<(ll)random_unint(1,INF,time(NULL))<<" "<<(ll)random_unint(1,INF,time(NULL))<<" "<<(ll)random_unint(1,INF,time(NULL))<<endl;
	}
	return 0;
}

