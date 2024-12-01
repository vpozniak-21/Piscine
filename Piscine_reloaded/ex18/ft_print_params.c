/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 13:48:48 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/01 14:18:04 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	if (argc > 0)
	{
		while (x < argc)
		{
			y = 0;
			while (argv[x][y])
			{
				ft_putchar(argv[x][y]);
				y++;
			}
			ft_putchar('\n');
			x++;
		}
	}
	return (0);
}
