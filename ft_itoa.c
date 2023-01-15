/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 13:10:44 by jmehlig           #+#    #+#             */
/*   Updated: 2022/05/09 13:10:45 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calcultes the number of digits of the number n

static int	ft_len_int(int n)
{
	int	i;

	i = 1;
	if (n >= 0)
	{
		while (n / 10 >= 1)
		{
			n /= 10;
			i++;
		}
	}
	else
	{
		while (n / 10 <= -1)
		{
			n /= 10;
			i++;
		}
	}
	return (i);
}

//returns the string for negative numbers

static char	*ft_positive(int n)
{
	int		i;
	char	*ptr;

	i = ft_len_int(n);
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (0);
	ptr[i] = 0;
	while (i > 0)
	{
		ptr[i - 1] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (ptr);
}

//returns the string for negative numbers: with a minus at the first place 

static char	*ft_negative(int n)
{
	int		i;
	char	*ptr;

	i = ft_len_int(n);
	ptr = (char *)malloc(sizeof(char) * (i + 2));
	if (!ptr)
		return (0);
	ptr[i + 1] = 0;
	ptr[0] = 45;
	while (i > 0)
	{
		ptr[i] = ((n % 10) * -1) + 48;
		n /= 10;
		i--;
	}
	return (ptr);
}

//takes an integer n and returns it as a string

char	*ft_itoa(int n)
{
	if (n >= 0)
		return (ft_positive(n));
	else
		return (ft_negative(n));
}
