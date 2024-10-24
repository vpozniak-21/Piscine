/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:48:33 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/24 12:48:36 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	int i;
	int from_str_to_int;
	int sign;
	int neg_count;

	i = 0;	
	neg_count = 1;
	sign = 1;
	from_str_to_int = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
 		i++;
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
		{
 			neg_count ++;
  		}
 		i++;
	}
	if(neg_count % 2 == 0)
		sign = -1;
	
	while(str[i] >= '0' && str[i] <='9')
	{
		from_str_to_int = (from_str_to_int * 10) + (str[i] - '0');
		i++;
	}
	return (from_str_to_int * sign);
}

int main(void)
{
    char *str = "+++++--123";
    int result = ft_atoi(str);
    printf("%d", result);
    return(0);
}
