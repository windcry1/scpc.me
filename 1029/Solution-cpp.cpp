#include<bits/stdc++.h>
int main()
{
	char chat[1510],key[1510];
	int n,num=0;
	scanf("%d",&n);
	getchar();
	fgets(key,1501,stdin);
	for(int i=1;i<=n;i++)
	{
		fgets(chat,1510,stdin);
		printf("%s\n",chat);
		if(strstr(chat,key)!=0)
		{
			for(int j=0; ;j++)
			{
				if(chat[j] == ':')
				{
					break;
				}
				else
				{
					printf("%c",chat[j]);
				}
			}
			num++;
			printf("\n");
		}
		memset(chat,0,sizeof(chat));
	}
	if( num == 0)
	{
		printf("none\n");
	}
	return 0;
}
