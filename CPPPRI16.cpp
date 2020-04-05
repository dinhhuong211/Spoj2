#include <stdio.h>
#include <math.h>

int main()
{
	int test;    scanf("%d", &test);
	while (test--)
	{
		long long n;  scanf("%lld", &n);
		long long count=0, a[100000];
		
		for (long long i=2;i<=sqrt(n);i++) a[i]=1;
		
		for (long long i=2;i<=sqrt(n);i++)  
			if (a[i]==1)
				for (long long j=i*i;j<=sqrt(n);j+=i) a[j]=0;	
		
		for (long long i=2;i<=sqrt(n);i++)
			if (a[i]==1) count++ ;
	
		printf ("%lld\n", count);
	}
	return 0;
}
