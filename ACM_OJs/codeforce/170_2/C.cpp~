//C
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

const int MAXN=100+5;
int n=0, m=0;
int k[MAXN]={0};
int lanlist[MAXN][MAXN]={0};
int sum=0;
int p[MAXN]={0};

inline int findroot(int x)//inline here,so care the memory limit
{
	if(p[x]==-1) return -1;
	return p[x]!=x?findroot(p[x]):x;
}

int main()
{
	scanf("%d%d", &n, &m);
	int independent=1;
	for(int i=0; i<MAXN; i++)
	  p[i]=-1;
	for(int i=0; i<n; i++)
	{
		scanf("%d", k+i);
		if(k[i]==0)
		{
			sum++;
			continue;
		}
		independent=1;
		for(int j=0; j<k[i]; j++)
		{
			scanf("%d", lanlist[i]+j);
			if(p[ lanlist[i][j] ] == -1)
			  p[ lanlist[i][j] ]=lanlist[i][j];
			else if(independent && findroot(lanlist[i][j])!=lanlist[i][j])
			{
				independent=0;
				p[ lanlist[i][0] ]=findroot(lanlist[i][j]);
			}
		}
		for(int j=0; j<k[i]; j++)
		  p[findroot(lanlist[i][j])]=p[lanlist[i][0]];
	}
	for(int i=1; i<=n; i++)//refresh the union-find set
	  p[i]=findroot(i);
	sort(p, p+n+1);
	for(int i=1; i<n; i++)
	{
		while(p[i]==-1) i++;
		if(i<n && p[i]!=p[i+1])
		  sum++;
	}
	printf("%d\n", sum);
	return 0;
}
