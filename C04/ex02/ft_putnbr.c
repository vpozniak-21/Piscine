/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:25:11 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/15 21:25:15 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//
//
/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)  // Handling the smallest possible int value
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	char n == int nb + '0'
	while (n[i])
	{
	if n ==
	else if (nb < 0)  // Handling negative numbers
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)  // Recursively printing each digit
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else  // Base case for single digits
	{
		ft_putchar(nb + '0');
	}
	write(1, &c, 1);
}

int	main (void)
{
	ft_putnb(33333333);
	return(0);
}
*/
#include <unistd.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}

void ft_putnbr(int nb) 
{
    if (nb < 0) 
    {
        ft_putchar('-');
        nb = -nb;
    }

    if (nb >= 10) 
    {
        ft_putnbr(nb / 10);
    }

    ft_putchar(nb % 10 + '0');
}

int main() {
    int number = -2147483649;
    ft_putnbr(number);
    return 0;
}
