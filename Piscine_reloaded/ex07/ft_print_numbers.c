/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:41:25 by vpozniak          #+#    #+#             */
/*   Updated: 2024/11/28 16:57:03 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

void	ft_print_numbers(void)
{
	int	a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}
/*
int	main(void)
{
	ft_print_numbers ();
	return (0);
}
*/