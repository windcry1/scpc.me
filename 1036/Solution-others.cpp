#include<cstdio>
#include<cstring>
using namespace std;
int m;
char c[2001];
int main()
{
	freopen("G:\\LOL\\scpc.me\\1036\\9.in","r",stdin);
    scanf("%d ",&m);
    fgets(c,2000,stdin);
    for (int i=0;i<strlen(c);i++)
    {
     if(i!=0&&c[i]!='0') printf("+");
     if (c[i]=='0') continue;
      printf("%c*%d^%d",c[i],m,strlen(c)-i-1);
    }
}
