/* Enter your solutions in this file */
#include <stdio.h>

int max(int a[], int n)
{
	int i, l = 0;
	for(i=0; i<n; i++)
		if(l<a[i])
			l = a[i];
	return l;
}

int min(int a[], int n)
{
	int i, s = a[0];
	for(i=1; i<n; i++)
		if(s>a[i])
			s=a[i];
	return s;
}

float average(int a[], int n)
{
	int i, sum = 0;
	float avg;
	for(i=0; i<n; i++)
		sum += a[i];
	avg = sum/(float)n;
	return (avg);
}

int frequency(int [], int, int);

int mode(int a[], int n)
{
	int f[n], i, m;
	for(i=0; i<n; i++)
		f[i] = frequency(a,a[i],n);
	m = max(f,n);
	for(i=0; i<n; i++)
		if(m==f[i])
			break;
			
	return (a[i]);
}
int frequency(int f[], int l, int n)
{
	int i, c=0;
	for(i=0; i<n; i++)
		if(l==f[i])
			c++;
	return c;
}

int factors(int n, int a[])
{
	int i = 2, j, c, index = 0;
	while(n!=1)
	{
		if(n%i==0)
		{
			c = 0;
			for(j=2; j<i; j++)
				if(i%j==0)
					c++;
			if(c==0)
			{
				a[index] = i;
				n /= i;
				index++;
				continue;
			}
		}
		i++;
	}
	for(i=0;i<index;i++)
		printf("%d\n",fac[i]);
	return index;
}
