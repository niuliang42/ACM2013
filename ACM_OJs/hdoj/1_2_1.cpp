//Biker's Trip Odometer
#include <cstdio>
#include <cmath>

using namespace std;

const double pi=3.1415927;
int main()
{
	double dia, rev, time;//To get
	double dis, mph;//To calculate
	int i=0;
	while(scanf("%lf %lf %lf", &dia, &rev, &time) && rev!=double(0))
	{
		i++;
		dis=pi*dia*rev;
		dis/=12;
		dis/=5280;
		mph=pi*dia*rev*3600/(time*12*5280);
		printf("Trip #%d: %.2f %.2f\n", i, dis, mph);
	}
	return 0;
}
