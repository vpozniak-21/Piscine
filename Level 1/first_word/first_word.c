/*Write a program that takes a string as a command-line argument, and displays the first word of the string followed by a newline.

A word is a section of the string that consists of non-space and non-tab characters.
If the number of arguments is different from 1, the program just displays a newline.
Leading spaces and tabs should be ignored.

$> ./first_word "  Hello World" | cat -e
Hello$
$> ./first_word "      a word" | cat -e
a$
$> ./first_word "" | cat -e
$
$> ./first_word | cat -e
$
*/
#include <unistd.h>
int main (int argc, char **argv)
{
	int i;
	i = 0;
	if ( argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (argv[1][i])
		{
			if( !((argv[1][i] >= 'a' && argv[1][i]<= 'z') || (argv[1][i] >='A' && argv[1][i]<='Z')))
			{
				i++;
			}
			
			if( argv[1][i] != ' ')
			{
				write(1, &argv[1][i], 1);
				
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}

