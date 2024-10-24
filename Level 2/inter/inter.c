/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:45:11 by vpozniak          #+#    #+#             */
/*   Updated: 2024/10/24 17:45:13 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h.>


int main(int argc, char *argv[])
{
char *duplicates = find_duplicates(argv[1], argv[2]);
	if(argc == 3)
	{
		write(1, duplicates, 1);
		
	}
	write(1, "\n", 1);
	return(0);

}
void find_duplicates( char *s1, char *s2)
{
	int i;
	int j;

	if( s1[1] != '\0'|| s2[1] != '\0')
	{
		i = 0;
		while (s1[i])
		{	
			j = 0;
			if(s1[i] == s2[j])
			{
				write(1, &s1[i], 1);
				j++;
			}
			i++;
		}
		return(s1);
	}
	return(NULL);
}
