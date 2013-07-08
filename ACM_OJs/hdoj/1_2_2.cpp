//Climbing Worm
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	int n,u,d,time=0;
	while(scanf("%d%d%d", &n, &u, &d) && n!=0)
	{
		time=2*ceil(((double)n-u)/(u-d))+1;
		printf("%d\n", time);
	}
	return 0;
}
