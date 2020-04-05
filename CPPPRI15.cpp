#include<stdio.h>
#include<math.h>
int NT (int n)
{
	if (n < 2) return 0;
	for (int i = 2 ; i <= sqrt(n) ; i++)
	{
		if (n%i == 0) return 0;
	}
	return 1;
}
int chiahet(int n)
{
	for (int i = 2 ; i <= n ; i++)
	{
		if (n%i == 0 && NT(i))
		{
			printf ("%d ", i);   break;
		}
	}	
}
main () {
	int t;
	scanf ("%d" , &t);
	int n;
	while (t--)
	{
		scanf ("%d" , &n);
		if (n>0) printf ("1 ");
		for (int j = 2 ; j <= n ; j++)
		{
			chiahet(j);
		}
	}
	return 0;
}
