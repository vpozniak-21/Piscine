/* Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/
#include <unistd.h>
int	main(void)
{
	char	a;
	a = '9';

	while(a >= '1')
	{
		write(1, &a, 1);
		a--;
	}
	return(0);
}
