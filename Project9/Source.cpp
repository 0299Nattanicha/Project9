#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int max= -2000000000,min=2000000000,n;
	scanf("%d" ,& n);
	int a;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (a > max)
		{
			max = a;
		}
		if (a < min)
		{
			min = a;
		}
	}
	printf("max = %d\nmin = %d", min, max);
	return 0 ;
}
