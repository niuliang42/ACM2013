//B
#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <cmath>
//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <stack>
//#include <utility>

using namespace std;

const int MAXN=100000 + 20;
int main()
{
	int n,s,t;
	int step=0;
	int shuop[MAXN];
	scanf("%d%d%d", &n, &s, &t);
	for(int i=1; i<n+1; i++)
	  scanf("%d", shuop+i);
	if(s!=t)
	{
		for(int i=0, next=s; i<n; i++)
		  if(shuop[next]!=t)
		  {
			  next=shuop[next];
			  step++;
		  }
		if(step!=n) printf("%d\n", ++step);
		else printf("-1\n");
	}
	else
	  printf("0\n");
	return 0;
}
