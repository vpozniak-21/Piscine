/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:53:48 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/11 10:24:09 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*moving_pointer;

	i = 0;
	moving_pointer = (unsigned char *)s;
	while (i < n)
	{
		moving_pointer[i] = '\0';
		i++;
	}
}
