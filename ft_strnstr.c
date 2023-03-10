/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:07:22 by jmehlig           #+#    #+#             */
/*   Updated: 2022/05/09 13:07:25 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//searches for a substring in a string, but not for more than len characters
//returns pointer to first occurence

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == 0)
	{
		return ((char *) &haystack[0]);
	}
	while (haystack[i] != 0 && i < len)
	{
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == 0)
				return ((char *) &haystack[i]);
		}
		i += 1;
		j = 0;
	}
	return (0);
}
