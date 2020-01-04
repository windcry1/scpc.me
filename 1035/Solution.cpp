#include<stdio.h>
int main()
{
	//freopen("G:\\LOL\\scpc.me\\1035\\7.in","r",stdin);
	//freopen("G:\\LOL\\scpc.me\\1035\\7.out","w",stdout);
    int n,a[103],i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n;i++)
    {
        a[i]=(n-i)*a[i];
    }
    if(a[0]==0){
    	printf("0\n");
    	return 0;
	}
//    for(i=n;i>=0;i--)
//    {
//        if(a[i]!=0)
//            break;
//    }
//    if(i==-1)
//        printf("0");
    for(j=0;j<n;j++)
    {
        printf("%d%c",a[j],(j==i?'\n':' '));
    }
    printf("\n");
    return 0;
}
