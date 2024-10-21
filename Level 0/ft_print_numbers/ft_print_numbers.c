/* Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void);
*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	a;
	a = '1';
	while ( a <= '9')
	{
		write(1, &a, 1);
		a++;
	}

}

int main(void)
{
	ft_print_numbers();
	return(0);
}

