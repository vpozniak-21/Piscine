/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:23:25 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/21 18:24:11 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		i++;
	}
	return(i);
}

int main(void)
{
	char str[] = "ghthh";
	printf("%d",ft_strlen(str));
	return(0); 
}
