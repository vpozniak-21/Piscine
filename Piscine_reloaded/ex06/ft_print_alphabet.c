/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:19:08 by vpozniak          #+#    #+#             */
/*   Updated: 2024/11/28 16:40:56 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char b);
void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		ft_putchar('\n');
		letter++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
