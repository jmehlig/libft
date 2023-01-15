/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_2d_array.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:35:35 by jmehlig           #+#    #+#             */
/*   Updated: 2023/01/06 18:35:37 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//frees the contents of a double-pointer 'array' of size 'array-size'

void	ft_free_2d_array(void **array, size_t size_array)
{
	size_t	i;

	if (array == NULL)
		return ;
	i = 0;
	while (i < size_array)
	{
		free(array[i]);
		i++;
	}
	free(array);
}
