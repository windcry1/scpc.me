#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("G:\\ACM\\scpc.me\\1069\\16.in","r",stdin);
	freopen("G:\\ACM\\scpc.me\\1069\\16.out","w",stdout);
    int n,i;
    cin>>n;
    while(n>0)
    {
        if(n%1000==144)
            n/=1000;
        else if(n%100==14)
            n/=100;
        else if(n%10==1)
            n/=10;
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}

