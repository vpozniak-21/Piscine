/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 14:24:27 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/01 16:43:36 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	if (argc > 1)
	{
		while (x < argc)
		y = 0;
		{
			while(argv[x][y] || argv[x+1][y])
			{
				if (argv[x][y] != argv[x+1][y])
				{
					return (argv[x][y] - argv[x+1][y]);
				}
				y++;
			}
			x++;
		}
	}
}