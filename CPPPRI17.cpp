#include <stdio.h>
#include <math.h>

long long a[1000000];
long long l,r; 
main()
{
	int test ;   scanf("%d", &test);
	while (test--)
	{
		scanf("%lld%lld", &l,&r);
		long long count=0;
		
		for (long long i=2;i<=sqrt(r);i++) a[i]=1;
		
		for (long long i=2;i<=sqrt(r);i++)  
			if (a[i]==1)
				for (long long j=i*i;j<=sqrt(r);j+=i) a[j]=0;
					
		for (long long i=2;i<=sqrt(r);i++)
			if (a[i]==1 && i*i>=l) count++;
	
		printf ("%lld\n", count);	
	}
	return 0;
}
