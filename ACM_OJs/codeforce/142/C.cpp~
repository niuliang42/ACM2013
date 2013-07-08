//C.Shifts
#include <cstdio>
#include <cmath>
#include <cstring>

using namespace std;

int n,m,minstep=0;

inline int shortest(bool b[], int l)
{
	int re=m;
	for(int i=0; i<m; i++)
	  if(b[(l+i)%m] || b[(l-i+m)%m])
	  {
		  re=i;
		  break;
	  }
	return re;
}
int min(int ma[])
{
	int minre=ma[0];
	for(int i=0; i<m; i++)
	  if(ma[i]<minre) minre=ma[i];
	return minre;
}
int main()
{
	char temp;
	bool data[105][11000];
	int steps[11000];
	bool impossible=false, tempimpossible=true;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			scanf(" %c", &temp);
			if(temp-'0')
			{
				data[i][j]=true;
				tempimpossible=false;
			}
			else data[i][j]=false;
		}
		if(tempimpossible) impossible=true;
		tempimpossible=true;
	}
	if(impossible) printf("-1\n");
	else
	{
		memset(steps, 0, sizeof(steps));
		for(int i=0; i<m; i++)
		  for(int j=0; j<n; j++)
			steps[i]+=shortest(data[j], i);
		printf("%d\n", min(steps));
	}	
	return 0;
}
