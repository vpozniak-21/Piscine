#include <unistd.h>

int		main(int argc, char *argv[])
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			char ltr = argv[1][i]; // Assign current character to ltr
			if (ltr >= 'A' && ltr <= 'Y') // Shift uppercase letters (except Z)
				ltr += 1;
			else if (ltr >= 'a' && ltr <= 'y') // Shift lowercase letters (except z)
				ltr += 1;
			else if (ltr == 'Z') // Wrap Z to A
				ltr = 'A';
			else if (ltr == 'z') // Wrap z to a
				ltr = 'a';
			
			write(1, &ltr, 1); // Write the modified character
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}