/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motuomin <motuomin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:08:42 by motuomin          #+#    #+#             */
/*   Updated: 2024/04/23 13:53:02 by motuomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description : compares byte string s1 against byte string s2.  Both strings
 * are assumed to be n bytes long. 
 *
 * Return value : The memcmp() function returns zero if the two strings are
 * identical, otherwise returns the difference between the first two differing
 * bytes (treated as unsigned char values, so that `\200' is greater than `\0',
 * for example). Zero-length strings are always identical.  This behavior is not
 * required by C and portable code should only depend on the sign of the
 * returned value. */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
