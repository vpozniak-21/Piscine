/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:37 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/19 12:08:09 by vpozniak         ###   ########.fr       */
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
int main() {
    char src[] = "Hello, world!";
    char dest[20];

    // Example 1: Non-overlapping memory blocks
    printf("Before ft_memmove: dest = \"%s\"\n", dest);
    ft_memmove(dest, src, 13); // Copy the entire string from src to dest
    printf("After ft_memmove (non-overlapping): dest = \"%s\"\n", dest);

    // Example 2: Overlapping memory blocks
    char overlap_src[] = "123456789";
    printf("\nBefore ft_memmove (overlapping): overlap_src = \"%s\"\n", overlap_src);
    ft_memmove(overlap_src + 3, overlap_src, 6); // Move "456789" to start at overlap_src[3]
    printf("After ft_memmove (overlapping): overlap_src = \"%s\"\n", overlap_src);

    return 0;
}
*/