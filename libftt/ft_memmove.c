/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:37 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/08 05:32:59 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*memmove(void *dest, const void *src, size_t n)

{
	size_t i;
	i = 0;

	unsigned char *s1 = (unsigned char *)dest;
	const unsigned char *s2 = (const unsigned char *)src;

	if (s1 == s2)
		return (dest);
	if (s1 < s2)
	{
		while (i < n)
		{
			s1[i] = s2[i];
			i++;
		}
	}
	else
	{
        i = n;
		while (i > 0)
		{
			i--;
			s1[i] = s2[i];

		}
	}
	return (dest);
}
