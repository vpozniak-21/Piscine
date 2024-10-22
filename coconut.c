#include <unistd.h>

int	calc_len(char *str)
{
	int	len;

	len = 0;
	while(str[len])
	{
		len++;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	int	len;
	int	x;
	int	y;
	x = 1;
	len = 0;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	while (argv[x])
	{
		len = calc_len(argv[x]);
		y = 0;
		while(argv[x][y])
		{
			write(1, &argv[x][y], 1);
			if (!(y == len - 1))
			{
				write(1, "aaa", 3);
			}
			
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
	return (0);
}
	
