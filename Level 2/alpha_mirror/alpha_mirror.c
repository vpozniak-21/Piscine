/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:20:33 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/23 20:20:40 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_position(char letter)
{
	int	position;

	if (letter >= 'A' && letter <= 'Z')
		position = letter - 'A' + 1;
	else if (letter >= 'a' && letter <= 'z')
		position = letter - 'a' + 1;
	else
		position = 0;
	return (position);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	i;
	int	position;
	
	
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	x = 1;
	while(x < argc)
	{
		i = 0;
		while (argv[x][i])
		{
			position = check_position(argv[x][i]);
			if(argv[x][i] >= 'A' && argv[x][i] <= 'Z' + 1)
			{
				argv[x][i] = 'Z' - position;
				write( 1, &argv[x][i], 1);
			}
			else if(argv[x][i] >= 'a' && argv[x][i] <= 'z' + 1)
			{
				argv[x][i] = 'z' - position;
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
	return (0);
}
