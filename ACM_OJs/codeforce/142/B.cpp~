//T-primes
#include <cstdio>
#include <cmath>

using namespace std;

inline bool isprime(long long t)
{
	double limit=sqrt(t);
	if(t<4) return true;
	else for(int i=2; i<=limit+1; i++)
	{
		if(t%i==0) return false; 
	}
	return true;
}
inline bool isTprime(long long t)
{
	if(t<4) return false;
	else if( pow((int)(sqrt(t)+0.01), 2)==t && isprime((long long)(sqrt(t)+0.01))) return true;
	else return false;
}
int main()
{
	int n;
	scanf("%d", &n);
	long long data[110000];
	for(int i=0; i<n; i++)
	{
		scanf("%I64d", data+i);
		if(isTprime(data[i])) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
