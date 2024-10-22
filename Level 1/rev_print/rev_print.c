#include <unistd.h>

int length_check(char *str)
{
	int	length;

	length = 0;
	while(str[length])
	{
		length++;
	}
	return(length);
}

char *rev_print(char *str)
{
	int	i;
	int	length;

	length = length_check(str);
	i =  length - 1;
	while(str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int main(void)
{
	char str[] = "Fuck the patriarchy";
	rev_print(str);
	return(0);
}

