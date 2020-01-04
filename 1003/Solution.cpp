/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/26/2019 9:39:43 PM
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
char s[100010];
vector<char> v1,v2,v3,v4;
int main(){
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	//cout.tie(0);
	//freopen("G:\\LOL\\scpc.me\\1003\\14.in","r",stdin);
	//freopen("G:\\LOL\\scpc.me\\1003\\14.out","w",stdout);
	scanf("%s",s);
	for(int i=0,len=strlen(s);i<len;i++){
		if(islower(s[i])) v1.push_back(s[i]);
		else if(isupper(s[i])) v2.push_back(s[i]);
		else if(isdigit(s[i])) v3.push_back(s[i]);
		else v4.push_back(s[i]);
	}
	for(auto i:v1) cout<<i;
	for(auto i:v2) cout<<i;
	for(auto i:v3) cout<<i;
	for(auto i:v4) cout<<i;cout<<endl;
	return 0;
}

