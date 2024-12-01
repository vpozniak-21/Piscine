/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_is_negative.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:44:16 by vpozniak          #+#    #+#             */
/*   Updated: 2024/11/28 17:47:45 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);

void	ft_is_negative(int n)
{
	if (n > 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}
/*
int	main(void)
{
	ft_is_negative('B');
	return (0);
}
*/