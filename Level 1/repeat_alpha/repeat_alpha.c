/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:57:48 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/21 19:57:56 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_repeat(char letters)
{
	int	repeat;

	if (letters >= 'A' && letters <= 'Z')
		repeat = letters - 'A' + 1;
	else if (letters >= 'a' && letters <= 'z')
		repeat = letters - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main(int argc, char **argv)

{ 

	if ( argc > 1)
	{

		int repeat;
		int i;
		int x;

		x = 1;
		i = 0;
		while(argv[x][i])
		{
			repeat = check_repeat(argv[x][i]);
			while (repeat > 0)
			{
				write(1, &argv[x][i], 1);
				repeat--;
			}
			i++;
		}
		x++;
	}
	write(1, "\n", 1);
	return(0);
}	

