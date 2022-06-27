/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlopez-i <jlopez-i@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:21:00 by jlopez-i          #+#    #+#             */
/*   Updated: 2022/06/22 17:21:26 by jlopez-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		(((unsigned char *)dst)[i] = ((unsigned char *)src)[i]);
		i++;
	}
	return (dst);
}
/*Copies n character from the object pointed to src into the object pointed 
to dst. The behavior is undefined if the objects overlap. 
Returns the value of dst.*/
