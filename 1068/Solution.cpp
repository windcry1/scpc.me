/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 10/23/2019 10:24:33 PM
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
queue<int> q1,q2;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		if(i&1) q1.push(i);
		else q2.push(i);
	}
	q1.pop();q1.pop();q2.pop();
	cout<<"1 2 3 ";
	int now=3;
	int dp[1010]={0,1,2,3};
	for(int i=4;i<=n;i++){
		now=dp[i-2]+dp[i-1];
		if(now&1){
			cout<<(dp[i]=q1.front())<<" ";
			q1.pop();
		}
		else {
			cout<<(dp[i]=q2.front())<<" ";
			q2.pop();
		}
	}
	cout<<endl;
	return 0;
}

