/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:21 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/11 10:20:32 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If little is an empty string, return big.
// If len is 0 or big is NULL, return NULL.
// Loop through big up to len characters and check for a match with little.
// If a match is found, return a pointer to the first character of the match.
// If no match is found, return NULL.
//
//
/* Problems with these :
5 check(ft_strnstr(empty, "", -1) == empty); showLeaks();
6 check(ft_strnstr(empty, "", 0) == empty); showLeaks();
*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
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
	return (NULL);
}
