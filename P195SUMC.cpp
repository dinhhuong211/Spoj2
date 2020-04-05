#include <stdio.h>

int  n,a[1000000], b[1000000];

main()
{
	scanf("%d", &n);
	for (int i=0;i<n;i++)   scanf("%d", &a[i]);
	for (int i=0;i<n;i++) 
	{ 
		if (a[i]==50)
		{
			int d=0;
			for (int j=0;j<i;j++) 
				if (a[j]==25) 
				{
					a[j]=0; d++;  break;
				}
			if (d==0) {  printf ("NO");   break;  }
		}
			
				
		if (a[i]==100) 
		{
			int s=0, k=0;
			for (int j=0;j<i;j++)
			{
				s+=a[j];
				if (s<=75) {
					a[j]=0; k++; 
				}
			}
			if (k!=2 && k!=3) { printf ("NO");  break; }	 	
		}
	}
	int sum=0;
	for (int i=0;i<n;i++)  sum+=a[i];
	if (sum==25*n) printf ("YES");
	
	return 0;
}
