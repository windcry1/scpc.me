/*************************************************************************
>>> Author: WindCry1
>>> Mail: lanceyu120@gmail.com
>>> Website: https://windcry1.com
>>> Date: 9/28/2019 4:45:11 PM
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
int a[110];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("C:\\Users\\LENOVO\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\LENOVO\\Desktop\\out.txt","w",stdout);
	int T;cin>>T;
	for(int cas=1;cas<=T;cas++){
		memset(a,0,sizeof a);
		int n;cin>>n;
		for(int i=2;i<=n;i++){
			int t=i;
			for(int j=2;j<=n;j++){
				while(t%j==0){
					t/=j;
					a[j]++;
				}
			}
		}
		cout<<"Case "<<cas<<": "<<n<<" =";
		bool first=false;
		for(int i=2;i<=100;i++){
			if(a[i]) cout<<(first?" * ":" ")<<i<<" "<<"("<<a[i]<<")",first=true;
		}
		cout<<endl;
	}
	return 0;
}

