/* Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
caBcDeFgHiJkLmNoPqRsTuVwXyZ$
*/

// a program with only main 
/*
#include <unistd.h>
int main(void)
{
	char a;
	char b;
	a = 97;
	b = 65;
	while( a <= 122 && b <= 90)
	{
		if (a% 2 != 0)
		{
		write(1, &a,1);
		}
		a++;
		if (b% 2 == 0)
		{
		write(1,&b,1);
		}
		b++;
	}
	return(0);
}



*/
//a function with main
#include <unistd.h>
void maff_alpha(void)

{
	char a;
	char b;
	a = 97;
	b = 65;
	while( a <= 122 && b <= 90)
	{
		if (a% 2 != 0)
		{
		write(1, &a,1);
		}
		a++;
		if (b% 2 == 0)
		{
		write(1,&b,1);
		}
		b++;
	}
}

int main(void)
{
maff_alpha();
return(0);
}

