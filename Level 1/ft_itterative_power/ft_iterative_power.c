#include <stdio.h>
int ft_iterative_power(int nb, int power)
{
	if (power < 0)
	{
	return(0);
	}
	if (nb == 0 && power == 0)
	return(1);
	int	result;
	result = 1;
	while (power > 0)
	{
		result = result * nb;
		power --;
	}  
	return (result);
}

int	main(void)
{
	int	a = ft_iterative_power(5, 5);
	printf("%d", a);
	return(0);
}
