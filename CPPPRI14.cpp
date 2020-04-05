#include <stdio.h>
#include <math.h>

int ktnto(int n)
{
	if (n<2) return 0;
	if (n==2) return 1;
	for (int i=2;i<=n/2;i++)
		if (n%i==0) return 0;
		else if (i==n/2) return 1;
}
int n;
int main()
{
	int test;
	scanf("%d", &test);
	while(test--)
	{
		int n;   scanf("%d", &n);
		for (int i=1;i<=sqrt(n);i++)
			if (ktnto(i)==1) printf ("%d ", i*i);
		
		printf("\n");
	}
	return 0;	
}
