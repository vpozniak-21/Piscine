#include <unistd.h>

void	ft_putnbr(int nb)
{
	char digit;

	// Handle the smallest negative number (-2147483648) directly
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return;
	}
	// Handle negative numbers by printing a '-' and negating nb
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	// Recursive case: Divide the number to isolate each digit
	if (nb > 9)
	{
		ft_putnbr(nb / 10); // Recursive call for the number without the last digit
	}
	// Convert the last digit to a character and print it
	digit = (nb % 10) + '0';
	write(1, &digit, 1);
}

int	main(void)
{
	ft_putnbr(42); // Example 1: Should print "42"
	write(1, "\n", 1);
	ft_putnbr(-12345); // Example 2: Should print "-12345"
	write(1, "\n", 1);
	ft_putnbr(0); // Example 3: Should print "0"
	write(1, "\n", 1);
	ft_putnbr(-2147483648); // Example 4: Should print "-2147483648"
	write(1, "\n", 1);
	return (0);
}

