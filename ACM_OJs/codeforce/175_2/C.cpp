//C
#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

const int MAXN=300000+200;

long long a[MAXN];
long long move=0;
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<n+1; i++) cin >> a[i];
	sort(a+1, a+n+1);
	for(int i=1; i<=n; i++)
	{
		move+=abs((long long)i-a[i]);
	}
	cout << move;
	return 0;
}
