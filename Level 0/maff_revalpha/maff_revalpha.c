/* Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$
*/

#include <unistd.h>
int main(void)
{
	char a;
	char b;
	
	a = 90;
	b = 122;
	while(a >= 65 && b >= 97)
	{
		if (b % 2 == 0)
		{
			write(1, &b, 1);
			
		}
		b--;
		if (a % 2 != 0)
		{
			write(1, &a, 1);
			
		}
		a--;
		
	}
	return(0);
}
