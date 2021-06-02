#include <math.h>
#include <stdio.h>

int fact(int n)
{
	if (n == 0)
		return 1;
	else return n * fact(n - 1);
}

int main()
{
	int n = 0, xn = 0; float x ; double l, y;

    printf(" enter the number of row members   ");
a:   scanf_s("%d", &n);

	if (n <= 0)
	{
		printf("\n"); 
		printf(" error, enter right number  "); goto a;
	}

	printf("\n");
	printf("enter the number of checks   ");

b:   scanf_s("%d", &xn);

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

c:      scanf_s("%f",&x);

		if (x < 0.1 || x>1)
		{
			printf("\n");
			printf(" error, enter right number  "); goto c;
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
}
