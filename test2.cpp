#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a[100000];
	char b[100000];
	int arr[100000];
	int brr[100000];
	scanf("%s%s",a,b);
	int len1=strlen(a);
	int len2=strlen(b);
	for(int i=0;i<=len1-1;i++)
	{
		arr[len1-i-1]=a[i]-'0';
	}
	for(int i=0;i<=len2-1;i++)
	{
		brr[len2-i-1]=b[i]-'0';
	}
	int max=0;
	if(len1>len2)max=len1;
	else max=len2; 
	for(int i=0;i<max;i++)
	{
		arr[i]+=brr[i];
		if(arr[i]>=10)arr[i+1]++,arr[i]-=10;
	}
	if(arr[max]>0)printf("%d",arr[max]);
	for(int i=max-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
 } 
