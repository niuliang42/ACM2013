//Box of Bricks
//Be care of reading and understanding the question
#include <cstdio>

using namespace std;

int main()
{
	int h[101],n,k=0,step;
	long int sum=0;
	while(scanf("%d", &n) && n)
	{
		k++;
		step=0;
		sum=0;
		for(int i=0; i<n; i++)
		{
			scanf("%d",h+i);
			sum+=h[i];
		}
		sum/=n;
		for(int i=0; i<n; i++)
		  if(h[i]>sum) step+=h[i]-sum;
		if(k-1!=0) printf("\n");
		//printf("Set #%d\n", k);
		//printf("The minimum number of moves is %d.\n", step);
		printf("%d\n", step);
	}
	return 0;
}
