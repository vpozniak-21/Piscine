/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:02 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/11 10:25:57 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	dup_str = (char *)malloc((i + 1) * sizeof(char));
	if (!dup_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup_str[i] = s[i];
		i++;
	}
	dup_str[i] = '\0';
	return ((char *)dup_str);
}
