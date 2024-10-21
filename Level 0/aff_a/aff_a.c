/*/*Write a program that takes a string, and displays the first 'a' character it
encounters in it, followed by a newline. If there are no 'a' characters in the
string, the program just writes a newline. If the number of parameters is not
1, the program displays 'a' followed by a newline.*/
//-----dla odnogo argumenta
//
//
#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				return (0);// Breaks out of the loop after finding 'a'
			}
			i++;
		}
		write(1, "\n", 1);
		return (0);// Writes a newline if no 'a' is found
	}
	write(1, "a", 1);
	write(1, "\n", 1);
}
//-------po ujebanski
//
//
/*#include <unistd.h>
int	main(void)
{
	char	str[] = "trululu";
	int	i;
	
	i = 0;
	while(str[i])
	{
		if (str[i] == 97)
		{
			write(1, &str[i], 1);
			write(1, "\n", 1);
			return (0); // Breaks out of the loop after finding 'a'
		}
		i++;
		
	}
	write(1, "\n", 1); // Writes a newline if no 'a' is found
	return (0);
}
*/
//
//
//
//------ dla bolshogo kolichestva argumentov
/* #include <unistd.h>

int	main(int argc, char **argv)
{
	{
	int i;
	int arg;

	if (argc > 1)
	{
		arg = 1;
		while (arg < argc) // Loop through all arguments
		{
			i = 0;
		while (argv[arg][i] != '\0')
		{
			if (argv[arg][i] == 'a')
			{
				write(1, "a", 1);
				write(1, "\n", 1);
				return (0);// Breaks out of the loop after finding 'a'
			}
			i++;
		}
		arg++; // If no 'a' is found in any argument
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "a", 1); // If no arguments are provided
		write(1, "\n", 1);
	}
	return (0);
	}
}*/
