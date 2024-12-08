/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:35 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/07 15:04:31 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t  i;
	i = 0;
	while(i < n)
	{
		if(((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return(0);
}