#include <stdio.h>
int ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if ( power == 0 || nb == 0)
	{
		return (1);
	}
	return (nb *ft_recursive_power(nb, power -1));
}

int main(void)
{
	int	a = ft_recursive_power(5, 5);

	printf ("%d", a);
	return (0);
}
