//Financial Management
#include <cstdio>

using namespace std;

int main()
{
	double data[12];
	for(int i =0; i<12; i++)
	  scanf("%lf", data+i);
	data[2]+=data[0]+data[1]; data[2]/=3;
	data[5]+=data[3]+data[4]; data[5]/=3;
	data[8]+=data[6]+data[7]; data[8]/=3;
	data[11]+=data[9]+data[10]; data[11]/=3;
	printf("$%.2f\n", (data[2]+data[5]+data[8]+data[11])/4);
	return 0;
}
