#include <bits/stdc++.h>
using namespace std;
long long gcd(long long  a,long long b)
{
	return b?gcd(b,a%b):a;
}
int main()
{
	//freopen("G:\\LOL\\scpc.me\\1041\\3.in","r",stdin);
	//freopen("G:\\LOL\\scpc.me\\1041\\3.out","w",stdout);
    long long a, b, c, t; 
    cin >> t;
    while (t--)
    {
        long long  sum = 0;
        cin >> a >> b >> c;
        sum = max(max(a, b), c) / gcd(gcd(a, b), c);
        cout << sum - 3 << endl;
    }
    return 0;
}

