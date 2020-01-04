/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/4/2019 8:48:25 PM
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
int a[1000010]; 
int main(){
//	ios::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
	//freopen("G:\\LOL\\scpc.me\\1050\\8.in","r",stdin);
	//freopen("G:\\LOL\\scpc.me\\1050\\8.out","w",stdout);
	int n;cin>>n;
	int t; 
	for(int i=1;i<=n;i++){
		cin>>t;a[t]++;
	}
	int flag=0;
	for(int i=1000000;i>=0;i--){
		if(a[i]&&!flag){
			flag=1;
		}
		else if(a[i]&&flag){
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}

