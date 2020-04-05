#include <stdio.h>

main()
{
	int test;  scanf("%d", &test);
	while (test--)
	{
		int m,n,a,b;
		scanf("%d%d%d%d", &m,&n,&a,&b);
		int d=0;
		for (int i=m;i<=n;i++)
		if (i%a==0 || i%b==0) d++;
		printf("%d\n", d);
	}
	return 0;
}
