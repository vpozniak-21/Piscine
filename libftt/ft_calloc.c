/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:53:51 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/11 10:18:04 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	*malloc(size_t size);
void	free(void *ptr);
*/
/*
size_t nmemb - the number of elements in the array;
size_t size - the weight of each byte of each element within the array
*/
#include "libft.h"
/*#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

*/
void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*mem_slot_ptr;
	size_t			max_limit;

	max_limit = SIZE_MAX;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (size > max_limit / nmemb)
		return (NULL);
	mem_slot_ptr = (void *)malloc(nmemb * size);
	if (!mem_slot_ptr)
		return (NULL);
	ft_bzero(mem_slot_ptr, nmemb * size);
	return (mem_slot_ptr);
}

/*
int	main(void) {
	void *original_ptr, *ft_ptr;

	// Case 1: Normal case
	original_ptr = calloc(5, sizeof(int));
	ft_ptr = ft_calloc(5, sizeof(int));
	printf("Case 1: Normal allocation\n");
	printf("Original: %p | ft_calloc: %p\n\n", original_ptr, ft_ptr);
	free(original_ptr);
	free(ft_ptr);

	// Case 2: Zero elements
	original_ptr = calloc(0, sizeof(int));
	ft_ptr = ft_calloc(0, sizeof(int));
	printf("Case 2: Zero elements\n");
	printf("Original: %p | ft_calloc: %p\n\n", original_ptr, ft_ptr);
	free(original_ptr);
	free(ft_ptr);

	// Case 3: Zero size
	original_ptr = calloc(5, 0);
	ft_ptr = ft_calloc(5, 0);
	printf("Case 3: Zero size\n");
	printf("Original: %p | ft_calloc: %p\n\n", original_ptr, ft_ptr);
	free(original_ptr);
	free(ft_ptr);

	// Case 4: Large allocation
	original_ptr = calloc(1000000, sizeof(int));
	ft_ptr = ft_calloc(1000000, sizeof(int));
	printf("Case 4: Large allocation\n");
	printf("Original: %p | ft_calloc: %p\n\n", original_ptr, ft_ptr);
	free(original_ptr);
	free(ft_ptr);

	// Case 5: Maximum size_t value (overflow simulation)
	original_ptr = calloc(SIZE_MAX, SIZE_MAX);  // Likely to fail, test NULL
	ft_ptr = ft_calloc(SIZE_MAX, SIZE_MAX);
	printf("Case 5: Maximum size_t value\n");
	printf("Original: %p | ft_calloc: %p\n\n", original_ptr, ft_ptr);
	free(original_ptr);
	free(ft_ptr);

	// Case 6: Memory contents comparison (normal case)
	original_ptr = calloc(5, sizeof(int));
	ft_ptr = ft_calloc(5, sizeof(int));
	printf("Case 6: Memory content check\n");
	printf("Original contents: ");
	for (size_t i = 0; i < 5; i++) {
		printf("%d ", ((int *)original_ptr)[i]);
	}
	printf("\nft_calloc contents: ");
	for (size_t i = 0; i < 5; i++) {
		printf("%d ", ((int *)ft_ptr)[i]);
	}
	printf("\n\n");
	free(original_ptr);
	free(ft_ptr);

	return (0);
}
*/