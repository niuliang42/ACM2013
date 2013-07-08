//A
#include <iostream>

using namespace std;

const int MAXN=100+5;
int main()
{
	int n=0, d[MAXN]={0}, sum=0, s=0, t=0;
	cin >> n;
	for(int i=1; i<=n; i++)
	{
		cin >> d[i];
		sum+=d[i];
	}
	cin >> s >> t;
	int swap=0;
	if(s==t)
	{
		cout << '0' << endl;
		return 0;
	}
	else if(s>t)
	{
		swap=s;
		s=t;
		t=swap;
	}
	int route=0;
	for(int i=s; i<t; i++)
	{
		route+=d[i];
	}
	route=route<(sum-route)?route:(sum-route);
	cout << route<< endl;
	return 0;
}
