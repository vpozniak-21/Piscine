/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:41:08 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/21 18:41:10 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		j++;
	}
	while (s1[i])
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return(s2);
}

int main(void)
{
	char s1[] = " Source";
	char s2[] = "Destination";
	ft_strcat(s1, s2);
	printf("%s", s2);
	return(0);
}
