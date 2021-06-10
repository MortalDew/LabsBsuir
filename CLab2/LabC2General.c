#include <math.h>
#include <stdio.h>
#include "LabC2General.h"

int fact(int n)
{
	if (n == 0)
		return 1;
	else return n * fact(n - 1);
}

int DoLab()
{
	int n = 0, xn = 0; float x ; double l, y;

    printf(" enter the number of row members   ");
a:   //scanf("%d", &n);
	n=3;
	

	if (n <= 0)
	{
		printf("\n"); 
		printf(" error, enter right number  "); goto a;
	}

	printf("\n");
	printf("enter the number of checks   ");

b:   //scanf("%d", &xn);
	xn = 1;

	if (xn <= 0)
	{
		printf("\n");
		printf(" error, enter right number  "); goto b;
	}

	for (size_t i = 0; i < xn; i++)
	{
		printf("\n\n"); 
		printf("0.1 ... 1" );
		printf("\n"); 

c:      scanf("%f",&x);


		if (x < 0.1 || x>1)
		{
			printf("\n");
			printf(" error, enter right number  "); 
			if (x>3000) break;
			goto c;
		}

		l = 0;
		y = sin(x);


		for (int d = 1; d <= n; d++)
		{
			int a = d - 1, b = 2 * d - 1;
			l += pow((-1), a) * pow(x, b) / fact(2 * d - 1);
		}
		printf("%lf", y);
		printf("\t%lf",l);
	}
	if (n>2) return 42;
		else return 0;
}
