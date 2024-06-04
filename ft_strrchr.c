/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motuomin <motuomin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:48:49 by motuomin          #+#    #+#             */
/*   Updated: 2024/04/23 12:02:50 by motuomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Description : locates the LAST occurrence of c (converted to a char)
 * in the string pointed to by s. The terminating null character is considered
 * to be part of the string; therefore if c is `\0', the functions locate the
 * terminating `\0'.
 *
 * Return value : The functions strchr() and strrchr() return a pointer to the
 * located character, or NULL if the character does not appear in the string.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[i] == (char)c)
		return ((char *)(s + i));
	while (i > 0)
	{
		i--;
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	return (NULL);
}
