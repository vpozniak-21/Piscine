/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:01:48 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/24 16:01:52 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int stringlen(char *src)
{
	int i = 0;
	while(src[i])
		i++;
	return i;
}

char    *ft_strdup(char *src)
{
	int i = 0;
	char *dest;
	int lenght = stringlen(src);
	
	dest = (char *) malloc((lenght + 1) * sizeof(char));
	if( dest == NULL)
		return NULL;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int main(void)
{
	char src[] = "fuck the patriarchy";
	char *dest = ft_strdup(src);
	printf ("%s", dest);
	free (dest);
	return (0);
}
