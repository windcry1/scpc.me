#include <cstdio>
#include <iostream>
using namespace std;
int main(){
	freopen("G:\\LOL\\scpc.me\\1039\\11.in","r",stdin);
	freopen("G:\\LOL\\scpc.me\\1039\\11.out","w",stdout);
    int n,a,i;
    cin>>n;
    for(i=n;i>=0;i--)
    {
        cin>>a;
        if(n==0&&a==0){
        	cout<<0<<endl;
        	return 0;
		}
        if(a)
        {    
            if(i!=n&&a>0) cout<<"+";   
            if(abs(a)>1||i==0) cout<<a;//abs??????   
            if(a==-1&&i) cout<<"-";    
            if(i>1) cout<<"x^"<<i;    
            if(i==1) cout<<"x";    
        }
    }
    return 0;
}
