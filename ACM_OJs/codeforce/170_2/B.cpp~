//B
#include <cstdio>
#include <cstring>

using namespace std;

int n=0;
char titles[35][25];
char result[25];
void make(int f, char *re)
{
	int i=0;
	result[0]='\0';
	while(f)
	{
		for(int j=strlen(re); j>=0; j--)
		  re[j+1]=re[j];
		re[0]='a' + f%27 - 1;
		f/=27;
		i++;
	}
}
bool check()
{
	int i=0;
	unsigned j=0;
	for(i=0; i<n; i++)
	  for(j=0; j<strlen(titles[i]); j++)
		if(!strncmp(result, titles[i]+j, strlen(result))) return false;
	return true;
}
int main()
{
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	  scanf("%s", titles[i]);
	for(int i=1; ;i++)
	{
		if(i%27==0) i++;
		memset(result, 0, sizeof(result));
		make(i, result);
		if(check())
		{
			printf("%s", result);
			return 0;
		}
	}
}
