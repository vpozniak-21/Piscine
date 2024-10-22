#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	x;
	
	

	if (argc < 2)
	{
		write (1, "\n", 1);
	}

	else
	{
		x = 1;
		while (x < argc)
		{
			i = 0;

			while (argv[x][i])
			{
				if (argv[x][i] >= 'a' && argv[x][i] <= 'z')
				{
					argv[x][i] = (argv[x][i] - 'a' + 13)% 26 + 'a';
					write(1, &argv[x][i], 1);
				}
 				else if (argv[x][i] >= 'A' && argv[x][i] <= 'Z')
				{
					argv[x][i] = (argv[x][i] - 'A' + 13)% 26 + 'A';
					write (1, &argv[x][i], 1);
				}
				else
				{
					write (1, &argv[x][i], 1);
				}
				i++;
			}
			x++;
			write (1, "\n", 1);
		}
	}
	return(0);
}
