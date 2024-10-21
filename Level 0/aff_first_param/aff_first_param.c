
/* Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$
*/
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
	write(1, "\n", 1);
	}
	else {
		int i;
		i = 0;
		while ( argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			
			i++;
		}
		write(1, "\n", 1);
	}
	return(0); // Return 0 to indicate successful execution egardless of whether it entered the else block or not.
}
