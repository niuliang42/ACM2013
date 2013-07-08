//a+b problem
#include <cstdio>

using namespace std;

int main()
{
	int a,sum,n,m;
	scanf("%d", &m);
	for(int i=0; ((i>0&&i<m)?printf("\n"):i<m) && i<m; i++)
	{
		sum=0;
		scanf("%d", &n);
		for(int j=0; j<n; j++)
		{
			scanf("%d", &a);
			sum+=a;
		}
		printf("%d\n", sum);
	}
	return 0;
}
