/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:32 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/08 06:27:25 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>

void	*memchr(const void *s, int c, size_t n)
{
	size_t i;

	i = 0;
	const unsigned char *str = (const unsigned char *)s;
	unsigned char char_in_str = (unsigned char) c;
	while(i < n)
	{
		if(str[i]== char_in_str)
			return ((void *)&str[i]) ;
		i++;

	}
	return NULL;
}