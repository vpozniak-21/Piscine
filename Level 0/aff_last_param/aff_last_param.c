/*Assignment name: aff_last_param
Expected files: aff_last_param.c
Allowed functions: write

Description
Write a program that takes strings as arguments and displays the last argument provided, followed by a newline character (\n). If no arguments are given (i.e., the number of arguments is less than 2), the program should simply output a newline.

Example Usage:
bash
Copy code
$> ./aff_last_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
s'en$
$> ./aff_last_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_last_param
$
*/
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		int	i;
		
		i = 0;
		while(argv[argc -1][i])
		{
			write(1, &argv[argc -1][i], 1);
			i++;
		}
	}
	return(0);
}


