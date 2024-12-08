/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:53:48 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/07 14:46:36 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	bzero(void *s, size_t n)
{
	size_t i;
	i =0;
	unsigned char *moving_pointer;
	moving_pointer = (unsigned char *)s;
	while( i < n)
	{
		moving_pointer[i] = '\0';
		i++;
	}

}
