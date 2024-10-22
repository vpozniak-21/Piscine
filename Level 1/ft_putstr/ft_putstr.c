#include <unistd.h>

void	ft_putstr(char *str)
{
	int	I;
	I = 0;
	while(str[I])
	{
		write(1, &str[I], 1);
		I++;
	}
	
}

int main(void)
{
	char str[]= "Fuck the patriarchy";
	ft_putstr(str);
	return(0);
}