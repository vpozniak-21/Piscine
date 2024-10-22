/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:16:12 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/22 22:16:25 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h> 

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*result;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	result = malloc(sizeof(int) * (size));
	if (result == NULL)
	{
		return (-1);
	}
	*range = result;
	i = 0;
	while (i < size)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (i);
}

int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i;

	i = 0;
	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf ("%d", tab[i]);
		i++;
	}
	free (tab);
	return (0);
}
