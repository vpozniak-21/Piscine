/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:37 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/18 15:40:37 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	const unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
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
	while (n > 0)
	{
		n--;
		s1[n] = s2[n];
	}
	return (dest);
}

/*
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (s1 == s2 || n == 0)
		return (dest);
	i = 0;
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

/*void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *s1;
	const unsigned char *s2;
	unsigned char *tmp;

	i = 0;
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (s1 == s2)
		return (dest);
	while (s1)
	{
		tmp[i] = s1[i];
		i++;
	}
	while (s2)
	{
		s2[i] = tmp[i];
		i++;
	}
	return (dest)
}*/