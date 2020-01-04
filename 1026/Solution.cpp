#include<stdio.h>
#include<string.h>
int main()
{
	//freopen("G:\\LOL\\scpc.me\\1026\\5.in","w",stdout);
	char a[101]={0},b[101]={0};
	int i,len;
	scanf("%s",a);//printf("%s\n",a);
	//freopen("G:\\LOL\\scpc.me\\1026\\5.out","w",stdout);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		b[len-i-1]=a[i];
	}
	if(strcmp(a,b)==0)
	printf("yes");
	else printf("no");
	return 0;
}
