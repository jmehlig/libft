/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehlig <jmehlig@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:01:31 by jmehlig           #+#    #+#             */
/*   Updated: 2022/08/07 14:40:33 by jmehlig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//frees the contents of the pointer 'word' and sets its value to NULL

void	*ft_free(void *word)
{
	free(word);
	word = NULL;
	return (word);
}
