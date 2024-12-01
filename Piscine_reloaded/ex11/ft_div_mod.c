/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobelie <rkobelie@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:10:43 by rkobelie          #+#    #+#             */
/*   Updated: 2024/11/28 20:48:30 by rkobelie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)

{
	int a;
	int b;
	int div;
	int mod;

	a = 1154;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("%d,%d", div, mod);
	return (0);
}*/