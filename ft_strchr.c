/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:08:28 by jmehlig           #+#    #+#             */
/*   Updated: 2022/05/09 13:08:29 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//searches for c in the string s, returns pointer to it if found
// otherwise return 0

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *) &s[i]);
		i++;
	}
	if (c == 0)
		return ((char *) &s[i]);
	else
		return (0);
}
