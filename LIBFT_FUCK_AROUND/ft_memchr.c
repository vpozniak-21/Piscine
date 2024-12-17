/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:32 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/11 10:36:00 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t						i;
	const unsigned char			*str;
	unsigned char				char_in_str;

	i = 0;
	str = (const unsigned char *)s;
	char_in_str = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == char_in_str)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
