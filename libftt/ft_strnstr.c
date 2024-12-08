/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:21 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/07 13:39:30 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If little is an empty string, return big.
// If len is 0 or big is NULL, return NULL.
// Loop through big up to len characters and check for a match with little.
// If a match is found, return a pointer to the first character of the match.
// If no match is found, return NULL.

#include <string.h>

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;

	if (big[0] == '\0' || len == 0)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);

	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}

	return NULL;
}