/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpozniak <vpozniak@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:54:40 by rkobelie          #+#    #+#             */
/*   Updated: 2024/12/07 13:38:51 by vpozniak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	//unsigned char *ptr_chg_mem;
	size_t i;

	i = 0;
	//ptr_chg_mem = (unsigned char *)s;
	while (i < n)
	{
	//ptr_chg_mem[i] = (unsigned char)c;
	((unsigned char *)s)[i]	= (unsigned char)c;
		i++;
	}
	return (s);
}

/*
void test_memset(const char *test_name, char *str, int value, size_t n) {
    // Store the original string to restore it after memset
    char original_str[10000];
    strncpy(original_str, str, n);

    // Perform the test with your custom ft_memset
    ft_memset(str, value, n);
    printf("%s\n", test_name);
    printf("ft_memset result: ");
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", (unsigned char)str[i]);
    }
    printf("\n");

    // Restore the original string and test with the standard memset
    strncpy(str, original_str, n);
    memset(str, value, n);
    printf("memset result:    ");
    for (size_t i = 0; i < n; i++) {
        printf("%02x ", (unsigned char)str[i]);
    }
    printf("\n\n");
}


int main() {
    // Test 1: Set a string to all zeroes
    char str1[] = "Hello, world!";
    test_memset("Test 1: Set a string to all zeroes", str1, 0, sizeof(str1));

    // Test 2: Set a string to all 1's (0x01)
    char str2[] = "Test string";
    test_memset("Test 2: Set a string to all 1's (0x01)", str2, 1, sizeof(str2));

    // Test 3: Set the first byte of an empty string
    char str3[] = "";
    test_memset("Test 3: Set the first byte of an empty string", str3, 65, sizeof(str3));

    // Test 4: Set a string with a large pattern (more than the size of the array)
    char str4[] = "Short string";
    test_memset("Test 4: Set a string with a large pattern", str4, 255, sizeof(str4));

    // Test 5: Set the first byte of a single character string
    char str5[] = "A";
    test_memset("Test 5: Set the first byte of a single character string", str5, 0, sizeof(str5));

    // Test 6: Setting all bytes in a large buffer to 0
    char str6[1000];
    test_memset("Test 6: Setting all bytes in a large buffer to 0", str6, 0, sizeof(str6));

    // Test 7: Setting all bytes in a large buffer to 255
    char str7[1000];
    test_memset("Test 7: Setting all bytes in a large buffer to 255", str7, 255, sizeof(str7));

    // Test 8: Set with a very large value (boundary)
    char str8[] = "Boundary test";
    test_memset("Test 8: Set with a very large value", str8, 200, sizeof(str8));

    // Test 9: Test with very small n (just one byte)
    char str9[] = "X";
    test_memset("Test 9: Test with very small n (just one byte)", str9, 0, 1);

    // Test 10: Test very large value of n (check the handling of large data)
    char str10[10000];
    test_memset("Test 10: Test with very large n", str10, 0, 10000);

    return 0;
}*/