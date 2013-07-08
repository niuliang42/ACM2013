//A. Dragon
#include <cstdio>
#include <cstdlib>
//#include <algorithm>

using namespace std;

int cmp(const void* xy1, const void *xy2)
{
	return ((int*)xy1)[0]-((int*)xy2)[0];
}
int main()//Fuck!
{
	int s,n,i;
	scanf("%d%d", &s, &n);
	int xy[1100][2];
	for(i=0; i<n; i++)
	  scanf("%d%d", xy[i], xy[i]+1);
	qsort(xy, n, sizeof(xy[0]), cmp);
	for(i=0; i<n; i++)
	  if(s>xy[i][0]) s+=xy[i][1];
	  else break;
	if(i==n) printf("YES\n");
	else printf("NO\n");
	return 0;
}
//ACed
