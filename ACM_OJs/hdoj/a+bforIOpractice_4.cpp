
//a+b problem
#include <cstdio>

using namespace std;

int main()
{
	int a,sum,n;
	while(scanf("%d", &n) && n!=0)
	{
		sum=0;
		for(int i=0; i<n; i++)
		{
			scanf("%d", &a);
			sum+=a;
		}
		printf("%d\n", sum);
	}
	return 0;
}
