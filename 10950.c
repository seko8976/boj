#include <stdio.h>

int	main(void)
{
	int a, b, t;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return (0);
}