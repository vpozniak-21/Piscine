/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:55:29 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/11 10:22:22 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// If  c is a lowercase letter, toupper() returns its
// uppercase equivalent, if an uppercase representation exists in
// the current locale.  Otherwise, it returns c
//
// The value returned is that of the converted letter, or c if the
// conversion was not possible.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
